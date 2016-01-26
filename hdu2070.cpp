#include<iostream>
using namespace std;
 __int64  a[51];
int main(){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=50;i++){
        a[i]=a[i-1]+a[i-2];
    }
    int n;
    while(cin>>n&&n!=-1)
        cout<<a[n]<<endl;
}
