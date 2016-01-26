#include<iostream>
using namespace std;
int main(){
    __int64 a,b,prea,preb;
    int n;
    while(cin>>n&&n!=-1){
        a=1;
        b=0;
        prea=0;
        preb=0;
        for(int i=0;i<n;i++){
            prea=a;
            preb=b;
            a=prea*3+preb*2;
            b=prea+preb;
        }
        cout<<a<<", "<<b<<endl;
    }
}
