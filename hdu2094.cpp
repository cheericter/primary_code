#include<iostream>
#include<string>
#include<set>

using namespace std;
set<string> W,F;
int main(){
    int n;
    while(cin>>n&&n){
        W.clear();
        F.clear();
        for(int i=0;i<n;i++){
            string a,b;
            cin>>a>>b;
            if(F.find(a)==F.end())//
                W.insert(a);
            if(W.find(b)!=W.end()){
                W.erase(b);
            }
            F.insert(b);
        }
        if(W.size()==1)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
