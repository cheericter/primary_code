#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int ah,am,as,bh,bm,bs;
        cin>>ah>>am>>as>>bh>>bm>>bs;
        int h,m,s;
        s=(bs+as)%60;
        m=((bs+as)/60+bm+am)%60;
        h=ah+bh+((bs+as)/60+bm+am)/60;
        cout<<h<<" "<<m<<" "<<s<<endl;

    }
}
