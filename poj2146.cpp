/**
*failed
**/
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<memory.h>
//#include<fstream>
using namespace std;
int calc(string &s1,string &s2,int dp[20][20]){
    int L1=s1.size(),L2=s2.size();
    for(int i=0;i<20;i++){
        dp[i][0]=i;
        dp[0][i]=i;
    }
    for(int i=1;i<=L1;i++){
        for(int j=1;j<=L2;j++){
            int ans;
            ans=min(dp[i-1][j],dp[i][j-1])+1;
            ans=min(ans,(s1[i-1]!=s2[j-1])+dp[i-1][j-1]);
            if(i>=2&&j>=2)
                ans=min(ans,
                        1 + (s1[i-1]!=s2[i-2]) + (s1[i-2]!=s2[i-1]) + dp[i-2][j-2] );
            if(i>=3&&j>=2)
                ans=min(ans,
                        2+(s1[i-1]!=s2[j-2])+(s1[i-3]!=s2[j-1])+dp[i-3][j-2]);
            if(i>=2&&j>=3)
                ans=min(ans,
                        2+(s1[i-1]!=s2[j-3])+(s1[i-2]!=s2[j-1])+dp[i-2][j-3]);
            dp[i][j]=ans;
        }
    }
    cout<<s1<<" & "<<s2<<" : "<<dp[L1][L2]<<endl;
    return dp[L1][L2];
}
bool check(string &s1,string &s2, int d){
	int data[20][20];
	memset(data,-1,sizeof(data));
	return calc(s1,s2,data)<=d;
	//return calc(s1,s2,0,0,data)<=d;
}

int main(void){
    //freopen("in.txt","r",stdin);
	while(true){
		int n,d;
		cin >> n;
		if(!n) break;
		cin >> d;
		vector<string> names(n);
		for(int i=0;i<n;i++)
			cin >> names[i];
		sort(names.begin(), names.end());
		int ans = 0;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(check(names[i], names[j],d)){
					ans++;
					cout << names[i] << ","<<names[j]<<endl;
				}
		cout << ans << endl;
	}
	return 0;
}
