#include<iostream>
using namespace std;
int a[100005];
int dp[100005];
int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int N;
        cin>>N;
        for(int i=1;i<=N;i++)
            cin>>a[i];
        fill(dp,dp+100005,0);
        dp[0]=0;
        for(int i=1;i<=N;i++){
            dp[i]=dp[i-1]+a[i]>=a[i]?dp[i-1]+a[i]:a[i];
        }
        int max=-200000000,l,r;
        for(int i=N;i>=1;i--){
            if(dp[i]>max)   {max=dp[i];r=i;}
        }
        int outmax=max;
        for(int i=r;i>=1;i--){
            max-=a[i];
            if(max==0) {
                l=i;
            }
        }
        cout<<"Case "<<t<<":"<<endl;
        cout<<outmax<<" "<<l<<" "<<r<<endl;
        if(t!=T) cout<<endl;
    }
    return 0;
}
