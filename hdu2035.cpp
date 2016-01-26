#include<iostream>
using namespace std;
int main(){
    int a,b,c=1;
    while(cin>>a>>b,a!=0||b!=0){
        c=1;
        while(b--){
            c=c*a%1000;
        }
        cout<<c<<endl;
    }
}
