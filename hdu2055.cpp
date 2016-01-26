#include<iostream>
#include<ctype.h>
using namespace std;
int cal(char a){
    int r;
    if(isupper(a)) r=(a-'A'+1);
    if(islower(a)) r=-(a-'a'+1);
    return r;
}
int main(){
    int  T;
    cin>>T;
    while(T--){
        char a;
        int b;
        cin>>a>>b;
        cout<<b+cal(a)<<endl;
    }
}
