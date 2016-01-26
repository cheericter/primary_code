#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
            int cnt=0;
        for(int i=2;i<=2*n;i+=2){
            cnt++;
            if(cnt==m&&i!=2*n){
                if(m&1) cout<<i-(m/2)*2<<" ";
                else cout<<(i-(m/2-1)*2+i-m)/2<<" ";
                cnt=0;
            }
            if(i==2*n){
                  //  cout<<" cnt "<<cnt<<" \t"<<endl;
                if(cnt&1) cout<<i-(cnt/2)*2<<endl;
                else cout<<(i-(cnt/2-1)*2+i-cnt)/2<<endl;

            }

        }
    }

}
