#include<iostream>
using namespace std;
#define MAX_N 10001
bool is_prime[MAX_N];
int prime[MAX_N];
int main(){
    fill(is_prime,is_prime+MAX_N,true);
    int len=0;
    for(int i=2;i<MAX_N;i++){
        if(is_prime[i]){
            prime[len++]=i;
            for(int j=i+i;j<MAX_N;j+=i){
                is_prime[j]=false;
            }
        }
    }

    int n;
    while(cin>>n&&n){
        int cnt=0;
         for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(prime[i]+prime[j]==n)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}
