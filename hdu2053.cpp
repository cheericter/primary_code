#include<iostream>
using namespace std;
int main(){
    int n;
    int l;
    while(cin>>n){
        l=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) l=1-l;

        }
        if(l) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}
