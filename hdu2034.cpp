#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,m;
    set<int> a;
    while(cin>>n>>m,n!=0||m!=0){
        a.clear();
        int tmp;
        while(n--) {
            cin>>tmp;
            a.insert(tmp);
        }
         while(m--) {
            cin>>tmp;
            a.erase(tmp);
        }
        set<int>::iterator  it;
        if(a.size()==0) cout<<"NULL"<<endl;
        else {
            for(it=a.begin();it!=a.end();it++)
                    cout<<*it<<" ";
            cout<<endl;
        }
    }
}
