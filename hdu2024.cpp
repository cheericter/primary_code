#include<string>
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin,a);
       // cout<<a<<endl;
        bool flag=true;
        if(!(isalpha(a[0])||a[0]=='_'))  flag=false;
        for(int i=1;i<a.size();i++){
            if(isalnum(a[i])||a[i]=='_') ;
            else flag=false;
        }
        if(flag)  cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
