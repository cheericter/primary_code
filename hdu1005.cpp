#include<iostream>
using namespace std;
int arr[51];
int main(){
    int a,b,n;
    while(cin>>a>>b>>n&&a!=0){
        arr[1]=1;
        arr[2]=1;
        for(int i=3;i<=50;i++){
            arr[i]=(a*arr[i-1]+b*arr[i-2])%7;
        }
        cout<<arr[n%49]<<endl;
    }
    return 0;
}
