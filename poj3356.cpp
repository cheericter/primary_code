#include<iostream>
#include<fstream>
#include<memory.h>
using namespace std;
char a[1010],b[1010];
int dp[1010][1010];
int na,nb;
int solve(char a[],char b[],int na,int nb){
    for(int i=0;i<=max(na,nb);i++){
        dp[i][0]=i;
        dp[0][i]=i;
    }
    for(int i=1;i<=na;i++){
        for(int j=1;j<=nb;j++){
            if(a[i]==b[j]) {
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=min(min(dp[i-1][j-1]+1,dp[i-1][j]+1),dp[i][j-1]+1);
            }
        }
    }
    return dp[na][nb];
}
int main(){
    //freopen("in.txt","r",stdin);
    while(cin>>na){
        for(int i=1;i<=na;i++)
            cin>>a[i];
        cin>>nb;
        for(int i=1;i<=nb;i++)
            cin>>b[i];
        cout<<solve(a,b,na,nb)<<endl;
    }
    return 0;
}
