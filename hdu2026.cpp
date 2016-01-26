#include<string>
#include<iostream>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        s[0]=s[0]-32;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==' '&&s[i]!=' ')
                s[i]-=32;
        }
        cout<<s<<endl;
    }
}
