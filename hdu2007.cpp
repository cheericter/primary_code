#include<iostream>
using namespace std;
int main(){
    int m,n;
    while(cin>>m>>n){
        int s1=0,s2=0;
        int tmp;
        if(m>n){
            tmp=m;
            m=n;
            n=tmp;
        }
        for(int i=m;i<=n;i++)
            if(i&1) s2+=i*i*i;
            else s1+=i*i;
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
