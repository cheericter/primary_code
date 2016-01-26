#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        double sum=0;
        for(int j=1;j<=a;j++){
            double b=j;
            if(j&1)
              sum+=1/b;
            else sum-=1/b;
        }
        printf("%.2f\n",sum);
    }
}
