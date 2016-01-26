#include<iostream>
#include<cstdio>

using namespace std;
double a[23];
double fac(int n){
    double r=1;
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
        int N;
        cin>>N;
        printf("%.2f%%\n",a[N]*100/fac(N));
    }
}
