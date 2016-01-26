#include<iostream>
using namespace std;
int main(){
    int n,m;

    while(cin>>n>>m&&n!=0){
        int tmp;
        for(int i=0;i<n;i++){
            cin>>tmp;

            if(i!=n-1){
                if(tmp<m||m==-1) cout<<tmp;
                else {
                        cout<<m<<" "<<tmp;
                        m=-1;
                }
                cout<<" ";
            }else {
                if(m!=-1){
                    if(tmp<m) cout<<tmp<<" "<<m<<endl;
                    else cout<<m<<" "<<tmp<<endl;
                }else cout<<tmp<<endl;
            }
        }
    }
}
