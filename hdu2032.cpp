#include<iostream>
#include<memory.h>
using namespace std;
int a[40][40]={0};
int main(){
    int n;
    while(cin>>n){
        memset(a,0,sizeof(a));
        a[1][1]=1;
        cout<<a[1][1]<<endl;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
               a[i][j]= a[i-1][j]+a[i-1][j-1];
               if(j!=i)
               cout<<a[i][j]<<" ";
               else  cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
