#include<iostream>
#include<algorithm>
using namespace std;
int a[200005];
int main(){
    int N,S;
    cin>>N>>S;
    int use=0;
    for(int i=0;i<N;i++){
        int len;
        cin>>len;
        if(len<S){
            a[use++]=len;
        }
    }
    sort(a,a+use);
    int num=0;
    int p=use;
    for(int i=0;i<use;i++){
        for(int j=i+1;j<p;j++){
            if(a[i]+a[j]<=S) num++;
            else{p=j;break;}
        }
    }
    cout<<num<<endl;
    return 1;
}
