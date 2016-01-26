#include<map>
#include<string>
#include<iostream>
using namespace std;
string a="aeiou";
int main(){
    string s;
    map<char,int> m;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        m.clear();
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<":"<<m[a[i]]<<endl;
        if(n!=0)
            cout<<endl;
    }
}
