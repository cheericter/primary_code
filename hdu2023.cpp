#include<iostream>
#include<cstdio>
using namespace std;
int a[51][6];
double b[51];
double c[6];
int main(){
    int n,m;
    while(cin>>n>>m){
        fill(c,c+6,0);
        for(int i=0;i<n;i++){
            b[i]=0;
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                b[i]+=a[i][j];
                c[j]+=a[i][j];
            }
            b[i]=b[i]/m;
        }
        for(int j=0;j<m;j++)
            c[j]=c[j]/n;
        int cnt=0;
        for(int i=0;i<n;i++){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(a[i][j]<c[j]) {
                    flag=false;
                    break;
                }
            }
            if(flag)  cnt++;
        }
        for(int i=0;i<n-1;i++)
           printf("%.2f ",b[i]);
        printf("%.2f\n",b[n-1]);
        for(int j=0;j<m-1;j++)
            printf("%.2f ",c[j]);
        printf("%.2f\n",c[m-1]);
        cout<<cnt<<endl<<endl;

    }
}
