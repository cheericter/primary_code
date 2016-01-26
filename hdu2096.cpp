#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        a%=100;
        b%=100;
        int c=(a+b)%100;
        cout<<c<<endl;
    }
}
