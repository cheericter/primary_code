#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
set<int> a;

int main(){
    int n;
    while(cin>>n&&n){
            a.clear();
        while(n--){
            int tmp;
            scanf("%d",&tmp);
            if(a.find(tmp)!=a.end()){
                a.erase(tmp);
            }else{
                a.insert(tmp);
            }
        }
        cout<<*(a.begin())<<endl;
    }
}
