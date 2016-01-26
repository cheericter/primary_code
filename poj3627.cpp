#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N,B,H[20005];
    cin>>N>>B;
    for(int i=0;i<N;i++){
        cin>>H[i];
    }
    sort(H,H+N);
    int cnt=0,sum=0;
    for(int i=N-1;i>=0;i--){
        sum+=H[i];
        cnt++;
        if(sum>=B) break;
    }
    cout<<cnt<<endl;
    return 1;
}
