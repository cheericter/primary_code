#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b&&!(a==0&&b==0)){
        a=a*100;
        int f=1;
        for(int i=0;i<=99;i++){

            if((a+i)%b==0){
                if(f==0){

                    cout<<" ";
                }
                else{
                    f=0;
                }
                if(i<10) cout<<"0"<<i;
                else cout<<i;
            }
        }
        cout<<endl;
    }
}
