#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m,n,ii=1,jj=1;
    __int64 tmp,max;
    while(cin>>m>>n) {
        max=0;
        ii=1;
        jj=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>tmp;
                if(abs(tmp)>abs(max)){
                    max=tmp;
                    ii=i;
                    jj=j;
                }
            }
        }
        cout<<ii<<" "<<jj<<" "<<max<<endl;
    }
}
