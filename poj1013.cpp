#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
int vote[12]={0};
bool ex[12]={false};
int main(){
    char left[10],right[10],res[10];
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<12;i++){
            vote[i]=0;
            ex[i]=false;
        }
        int t=3;
        while(t--){
            cin>>left>>right>>res;
            if(!strcmp(res,"even")){
                   // cout<<strlen(left)<<endl;
                for(int i=0;i<strlen(left);i++){
                    ex[left[i]-'A']=1;
                    ex[right[i]-'A']=1;
                }
            }else if(!strcmp(res,"up")){
                for(int i=0;i<strlen(left);i++){
                    vote[left[i]-'A']++;
                    vote[right[i]-'A']--;
                }
            }else if(!strcmp(res,"down")){
                for(int i=0;i<strlen(left);i++){
                   vote[left[i]-'A']--;
                    vote[right[i]-'A']++;
                }
            }
        }
        int max=0,pos;
        for(int i=0;i<12;i++)
        {
            if(!ex[i]&&abs(vote[i])>max) {pos=i;max=abs(vote[i]);}
        }
        char out;
        out=pos+'A';

        cout<<out<<" is the counterfeit coin and it is ";
        if(vote[pos]<0) cout<<"light";
        else cout<<"heavy";
        cout<<"."<<endl;
    }
    return 1;
}
