#include<string>
#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
            char max='a'-1;
        for(int i=0;i<s.size();i++){
            if(s[i]>max)  max=s[i];
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
            if(s[i]==max) cout<<"(max)";
            if(i==s.size()-1) cout<<endl;
        }
    }
}
