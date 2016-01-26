#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define MAX_N 505
int a[MAX_N];
int main(){
    int C;
    cin>>C;
    while(C--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int mid=a[n/2];
        long long int res=0;
        for(int i=0;i<n;i++){
            res+=abs(mid-a[i]);
        }
        cout<<res<<endl;
    }
}
