#include<iostream>
#include<cstdio>
#define LL  long long
#define MOD 100
using namespace std;
int mod(int a,LL b){
    int ret=1;
    while(b){
        if(b&1) ret=(ret*a)%MOD;
        a=(a*a)%MOD;
        b=b>>1;
    }
    return ret;
}
int main(){
    int t;
    while(cin>>t&&t){
         int cas=0;
         while(t--){
            LL n;
            cin>>n;
            printf("Case %d: %d\n",++cas,(mod(4,n-1)+mod(2,n-1))%MOD);
         }
         cout<<endl;
    }

}
