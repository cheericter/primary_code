#include<iostream>
using namespace std;
__int64 a[51];
int main(){
    a[1]=3;
    a[2]=8;
    for(int i=3;i<=40;i++){
        a[i]=2*(a[i-1]+a[i-2]);
    }
    int N;
    while(cin>>N){
        cout<<a[N]<<endl;
    }
}
