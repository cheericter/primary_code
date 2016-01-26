#include<iostream>
#include<string>
#include<vector>
using namespace std;
string s="0123456789ABCDEF";
int main(){
    int N,R;
    vector<int> a;
    while(cin>>N>>R){
        a.clear();
        if(N<0) {cout<<"-";N=-N;}
        while(N>=R){
            a.push_back(N%R);
            N=N/R;
        }
        a.push_back(N);
        for(int i=a.size()-1;i>=0;i--){
            cout<<s[a[i]];
        }
        cout<<endl;
    }


}
