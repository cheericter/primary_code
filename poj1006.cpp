#include<iostream>
using namespace std;
int main(){
    int p,e,i,d,a=1;
    int c=0;
    while(cin>>p>>e>>i>>d&&d!=-1){
        a=1;
        c++;
        p%=23;
        e%=28;
        i%=33;
        while((d+a)%23!=p||(d+a)%28!=e||(d+a)%33!=i){
            a++;
        }
        cout<<"Case "<<c<<": the next triple peak occurs in "<<a<<" days."<<endl;
    }
    return 1;
}
