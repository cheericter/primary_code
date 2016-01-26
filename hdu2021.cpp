#include<iostream>
using namespace std;
int m[6]={100,50,10,5,2,1};
int num[6]={0};
int main(){
    int te;
    while(cin>>te&&te){
        fill(num,num+6,0);
        for(int i=0;i<te;i++){
            int money;
            cin>>money;
            for(int j=0;j<6;j++){
                while(money>=m[j]){
                    money=money-m[j];
                    num[j]++;
                }
            }
        }
        int sum=0;
        for(int i=0;i<6;i++)
            sum+=num[i];
        cout<<sum<<endl;
    }
}
