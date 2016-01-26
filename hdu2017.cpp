#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) cnt++;
        }
        cout<<cnt<<endl;
    }
}
