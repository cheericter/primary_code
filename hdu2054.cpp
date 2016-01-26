#include<iostream>
#include<string>
#include<cmath>
#include<ctype.h>
using namespace std;
int main(){
    string n,m;
    while(cin>>n>>m){
        bool test;
        test=true;
        for(int i=0;i<n.size();i++){
            if(isdigit(n[i])&&n[i]!='0') {
                    test=false;
                    break;
            }
        }
        if(test) n="0";
        test=true;
        for(int i=0;i<m.size();i++){
            if(isdigit(m[i])&&m[i]!='0') {
                    test=false;
                    break;
            }
        }
        if(test) m="0";
        if(!m.compare(n))  cout<<"YES"<<endl;
        else if(m[0]=='+'&&n[0]=='-'||n[0]=='+'&&m[0]=='-') cout<<"NO"<<endl;
        else {
            int i;
            for(i=0;i<n.size();i++){
                if(isdigit(n[i])&&n[i]!='0') break;
                if(n[i]=='.') {
                    i--;
                    break;
                }
            }
            n=n.substr(i);
            //cout<<n<<endl;
            for(i=0;i<m.size();i++){
                if(isdigit(m[i])&&m[i]!='0') break;
                if(m[i]=='.') {
                    i--;
                    break;
                }
            }
            m=m.substr(i);
            //cout<<m<<endl;
            if(m.find(".")!= string::npos )
            {
                for(i=m.size()-1;i>=0;i--){
                    if(isdigit(m[i])&&m[i]!='0') break;
                    if(m[i]=='.') {
                        i--;
                        break;
                    }
                }
                m=m.substr(0,i+1);
            }

            // cout<<m<<endl;
             if(n.find(".")!= string::npos ){
                for(i=n.size()-1;i>=0;i--){
                if(isdigit(n[i])&&n[i]!='0') break;
                if(n[i]=='.') {
                    i--;
                    break;
                }
                }
                n=n.substr(0,i+1);
             }

            // cout<<n<<endl;
             if(!m.compare(n)) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
    }
}
