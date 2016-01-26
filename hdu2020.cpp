#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> a;
bool cmp_abs(int a,int b){
    return abs(a)>abs(b);
}
int main(){
    int n;
    while(cin>>n&&n){
            if(!a.empty())
            a.clear();
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end(),cmp_abs);
        for(int i=0;i<a.size()-1;i++)
            cout<<a[i]<<" ";
       cout<<a[a.size()-1]<<endl;
    }
}
