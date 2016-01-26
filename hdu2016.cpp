#include<iostream>
using namespace std;
int a[105];
int main(){
    int n;
    while(cin>>n&&n){
        int mina=100000000,mini=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mina){
                mini=i;
                mina=a[i];
            }
        }
        int tmp=a[mini];
        a[mini]=a[0];
        a[0]=tmp;
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
}
