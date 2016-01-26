#include<iostream>
using namespace std;
#define MAX_N 104
int a[MAX_N][MAX_N];
int dp[MAX_N];
int main(){
    int C;
    cin>>C;
    while(C--){
        int N;
        cin>>N;
        for(int i=1;i<=N;i++){
           for(int j=1;j<=i;j++){
                int tmp;
                cin>>tmp;
                a[i][j]=tmp;
           }
        }
        for(int i=1;i<=N;i++){
            dp[i]=a[N][i];
        }
        for(int i=N-1;i>=1;i--){
            for(int j=1;j<=i;j++){
                dp[j]=max(dp[j],dp[j+1])+a[i][j];
            }
        }
        cout<<dp[1]<<endl;
    }
}
