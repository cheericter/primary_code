#include<iostream>
#include<string.h>
using namespace std;
char iter[16][85];
void cal(char* num,char* res){
   int val[10]={0};
    for(int i=0;i<strlen(num);i++)
        val[num[i]-'0']++;
    int j=0;
    for(int i=0;i<10;i++){
        if(val[i]){
            if(val[i]<10){
                res[j++]=val[i]+'0';
                res[j++]=i+'0';
            }else{
                res[j++]=val[i]/10+'0';
                res[j++]=val[i]%10+'0';
                res[j++]=i+'0';
            }
        }
    }
    res[j]='\0';

}
int main(){

    while(cin>>iter[0]&&iter[0][0]!='-'){
        int flag=0,flag1=0;
        for(int i=0;i<15;i++){
            cal(iter[i],iter[i+1]);
            for(int j=i;j>=0;j--){
                if(!strcmp(iter[j],iter[i+1])){
                    flag=1;
                    if(i==0&&j==0){
                        cout<<iter[0]<<" is self-inventorying"<<endl;
                        flag1=1;
                        break;
                    }else if(j==i){
                        cout<<iter[0]<<" is self-inventorying after "<<i<<" steps "<<endl;
                        flag1=1;
                        break;
                    }else{
                        cout<<iter[0]<<" enters an inventory loop of length "<<(i-j+1)<<endl;
                        flag1=1;
                        break;
                    }
                }
            }
            if(flag1) break;
        }
        if(!flag) cout<<iter[0]<<" can not be classified after 15 iterations"<<endl;
    }
}
