#include<fstream>
#include<memory.h>
#include<iostream>
using namespace std;
int a[1005];
int N;
int dp[1005]={0};
int main(){
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<N;i++){
        int tmp=1;
        for(int j=0;j<i;j++){
            if(a[j]<a[i])
            tmp=max(tmp,dp[j]+1);
        }
        dp[i]=tmp;
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}
