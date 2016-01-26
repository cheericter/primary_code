#include<iostream>
using namespace std;
__int64 dp[40][40];
int main(){
    int cas=0;
    int n;
    dp[0][0]=1;
    for(int i=1;i<=36;i++){
        dp[i][0]= 1;
        for(int j=1;j<=i;j++){
            if(i==j) dp[i][j]=dp[i][j-1];
            else dp[i][j]=dp[i][j-1]+dp[i-1][j];
        }
    }
    while(cin>>n&&n!=-1){
        cout<<++cas<<" "<<n<<" "<<dp[n][n]*2<<endl;
    }
}
