#include<iostream>
using namespace std;
int main(){
    int a,b;
    bool flag;
    while(cin>>a>>b&&(a!=0||b!=0)){
        flag=false;
        for(int i=-20001;i<=20001;i++){
            if((a-i)*i==b){
                cout<<"Yes"<<endl;
                flag=true;
                break;
            }
        }
        if(!flag) cout<<"No"<<endl;
    }
}
