#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        int num=0;
        for(int i=0;i<s.size();i++){
            if(s[i]<0) num++;
        }
        cout<<num/2<<endl;
    }
}
