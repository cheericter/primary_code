#include<iostream>
#include<cstdio>
using namespace std;
__int64 a[23];
__int64 fac(int n){
    __int64 r=1;
    for(int i=1;i<=n;i++)
        r*=i;
    return r;
}
int main(){
    a[2]=1;
    a[3]=2;
    for(int i=4;i<=20;i++)
        a[i]=(i-1)*(a[i-1]+a[i-2]);
    int c;
    cin>>c;
    while(c--){
        int n,m;
        cin>>n>>m;
        cout<<a[m]*(fac(n)/fac(n-m)/fac(m))<<endl;
    }
}
