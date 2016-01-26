#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int a=1;
        for(int i=n-1;i>=1;i--){
            a=(a+1)*2;
        }

        cout<<a<<endl;
    }
}
