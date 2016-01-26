#include<iostream>
#include<algorithm>
using namespace std;
struct Cow{
    int index;
    int v1;
    int v2;
}cows[50005];
bool cmp1(Cow c1,Cow c2){
    return c1.v1>c2.v1;
}
bool cmp2(Cow c1,Cow c2){
    return c1.v2>c2.v2;
}
int main(){
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>cows[i].v1>>cows[i].v2;
        cows[i].index=i+1;
    }
    sort(cows,cows+N,cmp1);
    sort(cows,cows+K,cmp2);
    cout<<cows[0].index;
    return 1;
}
