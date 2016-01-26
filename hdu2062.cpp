#include<iostream>
using namespace std;
__int64 c[22]={0};
int a[22];
int main(){
    __int64 n,m;
    c[1]=1;
    for(int i=2;i<=20;i++)
        c[i]=i*(c[i-1]+1);
    //for(int i=1;i<=20;i++)
    // cout<<"c["<<i<<"] "<<c[i]<<endl;
    while(cin>>n>>m){
        for(int i=1;i<=20;i++)
            a[i]=i;
        while(n>=1){
            __int64 tmp=c[n]/n;
            __int64 sel=m/tmp+(m%tmp==0?0:1);
            m=m-m/tmp*tmp;
            if(m==0) m=tmp;
            if(m==1) {cout<<a[sel]<<endl;break;}
            cout<<a[sel]<<" ";
            m-=1;
            n--;
            for(int i=sel;i<=20;i++)
                a[i]=a[i+1];
        }
    }
}
