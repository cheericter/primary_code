#include<iostream>
using namespace std;
int main(){
    int n;
    double tmp;
    while(cin>>n&&n){
        int p=0,z=0;
        for(int i=0;i<n;i++){
            cin>>tmp;
            if(tmp>0)
                p++;
            else if(tmp==0)z++;
        }
        cout<<(n-z-p)<<" "<<z<<" "<<p<<endl;
    }
    return 0;
}
