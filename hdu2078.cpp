#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        int a=1000;
        while(n--){
            int tmp;
            cin>>tmp;
            if(tmp<a)a=tmp;
        }
        int res=(100-a)*(100-a);
        cout<<res<<endl;
    }
}
