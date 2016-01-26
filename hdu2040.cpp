#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int sum_a=0,sum_b=0;
        for(int i=1;i<=(a+1)/2;i++)
            if(a%i==0) sum_a+=i;
        for(int i=1;i<=(b+1)/2;i++)
            if(b%i==0) sum_b+=i;
        if(sum_a==b&&sum_b==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
