#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    double n;
    int m;
    while(cin>>n>>m){
       double s=0;
       for(int i=0;i<m;i++){
            s+=n;
            n=sqrt(n);
       }
       printf("%.2f\n",s);
    }
    return 0;
}
