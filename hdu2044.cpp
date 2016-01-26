#include<iostream>
using namespace std;
int cal(int n){
 if(n==1) cout<<"1"<<endl;
        else if(n==2) cout<<"2"<<endl;
        else{
            __int64 a=1,b=2,c;
            for(int i=3;i<=n;i++){
                c=a+b;
                a=b;
                b=c;
            }
            cout<<c<<endl;
        }
}
int main(){
    int N;
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        cal(b-a);
    }
}
