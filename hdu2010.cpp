#include<iostream>
using namespace std;
bool isTrue(int n){
    int pren=n;

    while(n>=10){
        pren-=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    return pren==n*n*n;
}
int aa[1005];
int main(){
    int m,n;
    while(cin>>m>>n){
        int index=0;
        for(int i=m;i<=n;i++){
            if(isTrue(i)) aa[index++]=i;
        }
        if(index==0)cout<<"no"<<endl;
        else {
            for(int i=0;i<index-1;i++){
                cout<<aa[i]<<" ";
            }
            cout<<aa[index-1]<<endl;
        }
    }
    return 0;
}
