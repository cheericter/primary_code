#include<iostream>
#include<cmath>
using namespace std;
int p[8]={4,2,4,2,4,6,2,6};
int prime(int n)
{
    int i=7,j,q;
    if(n==1)return 0;
    if(n==2||n==5||n==3)return 1;
    if(n%2==0||n%3==0||n%5==0)return 0;
    q=(int)sqrt(n);
    for(;i<=q;){
        for(j=0;j<8;j++){
            if(n%i==0)return 0;
            i+=p[j];
        }
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int a,b;
    while(cin>>a>>b&&b!=0){
        bool flag=true;
        for(int i=a;i<=b;i++){
            if(!prime(i*i+i+41)){
                cout<<"Sorry"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"OK"<<endl;
    }

}
