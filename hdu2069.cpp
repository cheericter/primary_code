#include<iostream>
using namespace std;
#define MAX_N  260
int c1[MAX_N][105],c2[MAX_N][105];
int s[6]={0,1,5,10,25,50};
int main(){
    int n=250;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=100;j++){
            if(i==j)
                c1[i][j]=1;
            c2[i][j]=0;
        }
    }
    for(int i=2;i<=5;i++){
        for(int j=0;j<=n;j++)
            for(int k=0;k+j<=n;k+=s[i])
                for(int kk=0;kk+k/s[i]<=100;kk++)
                    c2[k+j][kk+k/s[i]]+=c1[j][kk];
        for(int m=0;m<=n;m++){
            for(int k=0;k<=100;k++){
                  c1[m][k]=c2[m][k];
                  c2[m][k]=0;
            }
        }

    }
    while(cin>>n){
        if(n==0){
            cout<<"1"<<endl;
            continue;
        }
        int res=0;
        for(int i=0;i<=100;i++){
            res+=c1[n][i];
        }
        cout<<res<<endl;
    }
}
