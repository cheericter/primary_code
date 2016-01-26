#include<iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        if(N==1) cout<<"3"<<endl;
        else if(N==2) cout<<"6"<<endl;
        else if(N==3) cout<<"6"<<endl;
        else {
            __int64 a=6,b=6,c;
            for(int i=4;i<=N;i++){
                c=2*a+b;
                a=b;
                b=c;
            }
            cout<<c<<endl;
        }
    }
}
