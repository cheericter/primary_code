#include<iostream>
using namespace std;
int cow[60];
int main(){
    int n;
    while(cin>>n&&n){
        cow[1]=1;
        cow[2]=2;
        cow[3]=3;
        for(int i=4;i<=n;i++)
            cow[i]=cow[i-3]+cow[i-1];
        cout<<cow[n]<<endl;
    }

    return 0;
}
