#include<iostream>
#include<fstream>
using namespace std;
int c1[42];
int c2[42];
int a[9];
int b[9];
int main(){
    //freopen("in.txt","r",stdin);
    int nn,kk,T;
    cin>>T;
    while(T--){
        cin>>nn>>kk;
        for(int i=1;i<=kk;i++){
            cin>>a[i]>>b[i];
        }
        fill(c1,c1+42,0);
        fill(c2,c2+42,0);
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
        cout<<c1[nn]<<endl;
    }
}
