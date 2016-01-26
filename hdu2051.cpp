#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int n;
    while(cin>>n){

        bitset<32> b(n);
        int i=32;
        while(!b.test(--i));
        while(i-->=0)
            cout<<b[i+1];
        cout<<endl;
        //cout<<b<<endl;
    }
}
