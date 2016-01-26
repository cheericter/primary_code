#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m,tmp;
    while(cin>>n>>m,(n||m)){
        int dd=(int)sqrt(2.0*m);
        for(int d=dd;d>=1;d--){
            tmp=m-(d+d*d)/2;
            if(tmp%d==0){
                cout<<"["<<tmp/d+1<<","<<tmp/d+d<<"]"<<endl;
            }
        }
        cout<<endl;
    }
}
