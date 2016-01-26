#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int cas;
    cin>>cas;
    double h,maxh;
    while(cas--){
        int t;
        maxh=-1;
        cin>>t;
        while(t--){
            cin>>h;
            if(h>maxh) maxh=h;
        }
        printf("%.2f\n",maxh);
    }
}
