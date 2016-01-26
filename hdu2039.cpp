#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        double a,b,c;
        cin>>a>>b>>c;
        if(a+b>c&&a+c>b&&c+b>a)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
