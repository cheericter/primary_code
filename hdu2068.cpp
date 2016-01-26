#include<iostream>
using namespace std;
__int64 C(int n, int k){
    __int64 u=1,d=1;
    if(k<n/2) k=n-k;
    for(int i=1;i<=n-k;i++){
        d*=i;
        u*=(n-i+1);
    }
    return u/d;
}
__int64 a[15];
int main(){
    int n;
    a[1]=0;
    a[2]=1;
    for(int i=3;i<14;i++)
        a[i]=(i-1)*(a[i-1]+a[i-2]);

    while(cin>>n&&n!=0){
        __int64 sum=0;
        for(int i=1;i<=n/2;i++){
           // cout<<"C "<<C(n,i)<<" a[i]"<<a[i]<<endl;
            sum+=C(n,i)*a[i];
        }
        sum+=1;
        cout<<sum<<endl;
    }
}
