#include<iostream>
using namespace std;
__int64 a[51];

int main(){
    a[1]=1;
    a[2]=2;
    a[3]=3;
    for(int i=4;i<=50;i++){
        a[i]=a[i-1]+a[i-2];
    }
    int N;
    while(cin>>N){
        cout<<a[N]<<endl;
    }
}
