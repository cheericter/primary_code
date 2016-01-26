#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        int a=3;
        while(n--){
            a=(a-1)*2;
        }
        cout<<a<<endl;
    }
}
