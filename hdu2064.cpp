#include<iostream>
using namespace std;
__int64 dp[40];
int main(){
    dp[1]=2;
    for(int i=2;i<39;i++)
        dp[i]=dp[i-1]*3+2;
    int n;
    while(cin>>n){
        cout<<dp[n]<<endl;
    }
}

