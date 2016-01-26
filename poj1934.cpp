#include<iostream>
#include<algorithm>
#include<string>
#include<memory.h>
#include<set>
#include<fstream>
using namespace std;
string a,b;
int dp[88][88]={0};
int lasta[88][27],lastb[88][27];
string tmp;
set<string> setstr;
int LCS(string a,string b){
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=b.size();i++)
        for(int j=1;j<=a.size();j++)
            if(b[i-1]==a[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    return dp[b.size()][a.size()];
}
void find(int x,int y,int len){
    if(len<=0){

        setstr.insert(tmp);
        return;
    }
    if(x>0&&y>0){
        for(int i=0;i<26;i++){
               // cout<<" i:"<<i<<endl;
       // cout<<"len"<<len<<endl;
            int ia=lasta[x][i];
            int ib=lastb[y][i];
            //cout<<"ia : "<<ia<<"ib : "<<ib<<endl;
            //cout<<"dp[ib][ia]"<<dp[ib][ia]<<endl;
            if(dp[ib][ia]==len){
                tmp[len-1]=(char)(i+'a');
                //cout<<"tmp<<"<<tmp<<endl;
                find(ia-1,ib-1,len-1);
            }
        }
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    string a,b;
    cin>>a>>b;
    int al=a.size();
    int bl=b.size();
    //cout<<a<<"\t"<<b<<endl;
    LCS(a,b);
    string tmp1=string(dp[bl][al],'0');
    tmp=tmp1;
//    for(int i=1;i<=bl;i++){
//         for(int j=1;j<=al;j++)
//            cout<<dp[i][j]<<" ";
//         cout<<endl;
//    }
    memset(lasta,0,sizeof(lasta));
    memset(lastb,0,sizeof(lastb));
    for(int i=1;i<=al;i++)
        for(int j=0;j<26;j++)
            if(a[i-1]==j+'a')
                lasta[i][j]=i;
            else lasta[i][j]=lasta[i-1][j];
//     for(int j=0;j<26;j++)
//                cout<<lasta[al][j]<<" ";
//    cout<<endl;
    for(int i=1;i<=bl;i++)
        for(int j=0;j<26;j++)
            if(b[i-1]==j+'a')
                lastb[i][j]=i;
            else lastb[i][j]=lastb[i-1][j];
//    for(int j=0;j<26;j++)
//        cout<<lastb[bl][j]<<" ";
//    cout<<endl;
    find(al,bl,dp[bl][al]);
    set<string>::iterator it;
    //cout<<"set size : "<<setstr.size()<<endl;
    for(it=setstr.begin();it!=setstr.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
