#include<iostream>
#include<string>
using namespace std;
int main(){
    int N;
    cin>>N;
    cin.ignore();
    while(N--){
        string s;
        getline(cin,s);
        int t[4]={0,0,0,0};
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z') t[0]=1;
            if(s[i]>='a'&&s[i]<='z') t[1]=1;
            if(s[i]>='0'&&s[i]<='9') t[2]=1;
            if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^') t[3]=1;
        }
        int sum=0;
        for(int i=0;i<4;i++)
            sum+=t[i];
        if(s.size()>=8&&s.size()<=16&&sum>=3)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
