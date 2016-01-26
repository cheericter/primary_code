#include<iostream>
#include<fstream>
using namespace std;
int c1[51];
int c2[51];
int a[27];
int b[27];
int main(){
    //freopen("in.txt","r",stdin);
    int cas;
    cin>>cas;
    while(cas--){
        int nn=50;
        int kk=26;
        for(int i=1;i<=26;i++){
            a[i]=i;
            cin>>b[i];
        }
        fill(c1,c1+51,0);
        fill(c2,c2+51,0);
        for(int i=0;i*a[1]<=nn&&i<=b[1];i++)
            c1[i*a[1]]=1;
        for(int i=2;i<=kk;i++){
            for(int j=0;j<=nn;j++){
                for(int k=0;k<=b[i]&&j+k*a[i]<=nn;k++){
                    c2[j+k*a[i]]+=c1[j];
                }
            }
            for(int l=0;l<=nn;l++){
                c1[l]=c2[l];
                c2[l]=0;
            }
        }

        __int64 res=0;
        for(int i=1;i<=50;i++)
            res+=c1[i];
        cout<<res<<endl;

    }
}
