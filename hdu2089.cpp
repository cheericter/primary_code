#include<iostream>
#include<vector>
using namespace std;
//time limit exceed
bool check(int n){
    int a;
    int m=0;
    while(n>0){
        a=n%10;
        if(a==4) return false;
        else if(a==2) m=1;
        else if(a==6&&m==1) return false;
        else {
            m=0;
        }
        n/=10;
    }
    return true;
}
int dp[10][11];//
int solve(int num){
    vector<int> cc;
    int sum=0;
    while(num>0){
        cc.push_back(num%10);
        num/=10;
    }
    cc.push_back(0);
    int index=cc.size()-1;
    for(int i=index-1;i>=0;i--){
        for(int j=0;j<cc[i];j++){
            if(!(j==2&&cc[i+1]==6)){
                 sum+=dp[i+1][j];
            }
        }
        if(cc[i]==4||(cc[i]==2&&cc[i+1]==6))
            break;
    }
    return sum;
}
int main(){
    //fill(dp,dp+100,0);
    for(int i=0;i<10;i++){
        if(i!=4) dp[1][i]=1;
    }
    for(int i=2;i<=8;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(j!=4&&!(k==2&&j==6)){
                    dp[i][j]+=dp[i-1][k];
                }
            }
        }
    }
    int n,m;
    while(cin>>n>>m&&(n!=0||m!=0)){
       // cout<<m+1<<": " <<solve(m+1)<<"\t"<<n<<" : "<<solve(n)<<endl;
        int res=solve(m+1)-solve(n);
        cout<<res<<endl;
    }
}
