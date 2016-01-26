#include<iostream>
using namespace std;
int main(){
    __int64 a,b;
    int n;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a%b==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
