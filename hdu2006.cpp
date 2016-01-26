#include<iostream>
using namespace std;
int a;
int main(){
    int n;
    while(cin>>n){
        int s=1;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a&1) s*=a;
        }
        cout<<s<<endl;
    }
    return 0;
}
