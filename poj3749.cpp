#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,e;

    while(getline(cin,s),s.compare("ENDOFINPUT")){
        string str;
        getline(cin,str);
        int len=str.length();
        for(int i=0;i<len;i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]=str[i]-5;
                if(str[i]<'A')
                    str[i]+=26;
            }
        }
        getline(cin,e);
        cout<<str<<endl;
    }

}
