#include<iostream>
#include<algorithm>
using namespace std;
struct tv{
    int l;
    int r;
} a[105];
bool cmp(tv a,tv b){
    return a.r<b.r;
}
int main(){
    int n;
    while(cin>>n,n!=0){
        for(int i=0;i<n;i++)
            cin>>a[i].l>>a[i].r;
        sort(a,a+n,cmp);
        //for(int i=0;i<n;i++)
        //    cout<<a[i].l<<" "<<a[i].r<<endl;
        int endtime=-1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i].l>=endtime){
                cnt++;
                endtime=a[i].r;
            }
        }
        cout<<cnt<<endl;
    }
}
