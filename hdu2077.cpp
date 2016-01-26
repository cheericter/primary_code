#include<iostream>
#include<cmath>
using namespace std;
int a[23]={0,1};
int main(){
    for(int i=2;i<23;i++){
        a[i]=3*a[i-1]+1;
    }
    int T;
    cin>>T;
    while(T--){
        int tmp;
        cin>>tmp;
        cout<<2*a[tmp-1]+2<<endl;
    }

}
