#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a,b,n;
    while(N--){
        cin>>n>>a>>b;
        if(n>6) a+=27+8*(n-6);
        else a+=(7+(7-n+1))*n/2;
        if(a>=b)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;

}
