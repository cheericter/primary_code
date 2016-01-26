#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int i=0,j=s.size()-1;
        bool flag=true;
        while(i<=j){
            if(s[i]!=s[j]) {flag=false;break;}
            else {
                i++;
                j--;
            }
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
