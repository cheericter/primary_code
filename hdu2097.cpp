#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
        int nn=n;
        int a=n%10;n/=10;
        int b=n%10;n/=10;
        int c=n%10;n/=10;
        int d=n%10;n/=10;
        int sum=a+b+c+d;
        n=nn;
        a=n%12;n/=12;
        b=n%12;n/=12;
        c=n%12;n/=12;
        d=n%12;n/=12;
        int sum1=a+b+c+d;
        n=nn;
        a=n%16;n/=16;
        b=n%16;n/=16;
        c=n%16;n/=16;
        d=n%16;n/=16;
        int sum2=a+b+c+d;
        n=nn;
        if(sum==sum1&&sum==sum2){
            cout<<n<<" is a Sky Number."<<endl;
        }else {
            cout<<n<<" is not a Sky Number."<<endl;
        }
    }
}
