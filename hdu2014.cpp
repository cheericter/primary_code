#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n;
    while(cin>>n){
        int l,u,tmp;
        cin>>tmp;
        l=u=tmp;
        int sum=0;
        sum+=tmp;
        n-=1;
        for(int i=0;i<n;i++){
            cin>>tmp;
            u=max(u,tmp);
            l=min(l,tmp);
            sum+=tmp;
        }
        sum=sum-l-u;
        double ave=(double)sum/(n-1);
        printf("%.2f\n",ave);
    }
}
