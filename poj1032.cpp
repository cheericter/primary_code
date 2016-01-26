#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int c=2;
    sum+=c;
    while(c<n-sum){
        c++;
        sum+=c;
    }
    if(c==n-sum){
        for(int i=2;i<c;i++){
            cout<<i+1<<" ";
        }
        cout<<c+2<<endl;
    }else{
        for(int i=2;i<=c-(n-sum);i++)
            cout<<i<<" ";
        for(int i=c-(n-sum)+1;i<=c;i++)
            cout<<i+1<<" ";
        cout<<endl;
    }
}
