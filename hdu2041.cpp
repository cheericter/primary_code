#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        if(n==1) cout<<"0"<<endl;
        else if(n==2) cout<<"1"<<endl;
        else if(n==3) cout<<"2"<<endl;
        else{
            int a=1,b=2,c;
            for(int i=4;i<=n;i++){
                c=a+b;
                a=b;
                b=c;
            }
            cout<<c<<endl;
        }
    }
}
