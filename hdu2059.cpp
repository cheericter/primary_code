#include<iostream>
#include<cmath>
using namespace std;
#define INT_MAX  2147483647
double a[105],dp[105];

int main(){
    double L;
    int N;
    double C,T;
    double VR,VT1,VT2;
    while(cin>>L){
        cin>>N>>C>>T>>VR>>VT1>>VT2;//VT2 slow VT1  fast
        a[0]=0;
        for(int i=1;i<=N;i++)
            cin>>a[i];
        a[N+1]=L;
        fill(dp,dp+105,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=N+1;i++){
            for(int j=0;j<i;j++){
                    double t;
                    if(a[i]-a[j]>C)
                        t=dp[j]+(a[i]-a[j]-C)/VT2+C/VT1+T;
                    else t=dp[j]+(a[i]-a[j])/VT1+T;
                dp[i]=min(dp[i],t);
            }
            //cout<<dp[i]<<endl;
        }
        dp[N+1]-=T;
       // for(int i=0;i<=N+1;i++)
        //    cout<<"dp"<<i<<" : "<<dp[i]<<endl;
        //cout<<"T"<<T<<endl;
        if(dp[N+1]>L/VR) cout<<"Good job,rabbit!"<<endl;
        else cout<<"What a pity rabbit!"<<endl;
    }
    return 0;
}
