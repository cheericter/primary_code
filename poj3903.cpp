#include<iostream>
#include<algorithm>
using namespace std;
#define INF 0x7FFFFFFF
int dp[100005];
int a[100005];
int n;
void solve(){
    fill(dp,dp+n,INF);
    for(int i=0;i<n;i++)
        *lower_bound(dp,dp+n,a[i])=a[i];
    cout<<lower_bound(dp,dp+n,INF)-dp<<endl;
}
int main(){
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>a[i];
        solve();
    }
    return 0;
}
