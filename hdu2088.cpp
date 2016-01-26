#include<iostream>
#include<cmath>
using namespace std;
int a[100];
int main(){
    int n,cas=0;
    while(cin>>n&&n!=0){
        if(cas){
            cout<<endl;
        }else{
            cas=1;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum/=n;
        int res=0;
        for(int i=0;i<n;i++){
            res+=abs(sum-a[i]);
        }
        res/=2;
        cout<<res<<endl;;
    }
}
