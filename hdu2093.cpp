#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <utility>
#include <queue>
#include <stack>
#include <list>
#include <vector>
#include <cstdio>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;
struct people{
    string name;
    int num;
    int time;
};
int m;
bool cmp(people a,people b){
    if(a.num!=b.num) return a.num>b.num;
    else if(a.time!=b.time) return a.time<b.time;
    else return a.name<b.name;
}
people ss[1000];
int my_atoi(string s){
    int res=0;
    for(int i=0;i<s.size();i++){
        res=res*10+(s[i]-'0');
    }
    return res;
}
int my_split(string s){
    int res=0,res1=0;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]=='(') break;
        res=res*10+(s[i]-'0');
    }
    i++;
    for(;i<s.size();i++){
        if(s[i]==')') break;
        res1=res1*10+(s[i]-'0');
    }
    return res+res1*m;
}

int main(){
    //freopen("in.txt","r",stdin);
    int n;
    string name;
    int index=-1;
    cin>>n>>m;
    while(cin>>name){
        index++;
        ss[index].name=name;
        int ac=0;
        int time=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(s[0]=='-'||s[0]=='0'){}
            else if(s[s.size()-1]!=')'){
                ac++;
                time+=my_atoi(s);
            }else{
                ac++;
                time+=my_split(s);
            }
        }
        ss[index].num=ac;
        ss[index].time=time;
    }

    sort(ss,ss+index+1,cmp);
    for(int i=0;i<=index;i++){

		cout.flags(ios::left);
        cout<<setw(10)<<ss[i].name<<" ";
        cout.flags(ios::right);
        cout<<setw(2)<<ss[i].num<<" ";
        cout<<setw(4)<<ss[i].time<<endl;
    }
}
