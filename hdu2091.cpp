#include<iostream>
using namespace std;
int main(){
    char sam;
    int n;
    int cas=0;
    while(cin>>sam&&sam!='@'){
            cin>>n;
        cas++;
        if(cas==1){

            int p1,p2;
            p2=n-1;
            p1=n-1;
            for(int j=0;j<p2;j++)
                cout<<" ";
            cout<<sam<<endl;
            if(n==1) continue;
            p1--;
            p2++;
            for(int i=1;i<n-1;i++){
                for(int j=0;j<p2;j++){
                    if(p1==j) cout<<sam;
                    else cout<<" ";
                }
                cout<<sam<<endl;
                p1--;
                p2++;
            }

            for(int i=0;i<2*n-1;i++)
                cout<<sam;
            cout<<endl;
        }else{
            cout<<endl;
             int p1,p2;
            p2=n-1;
            p1=n-1;
            for(int j=0;j<p2;j++)
                cout<<" ";
            cout<<sam<<endl;
             if(n==1) continue;
            p1--;
            p2++;
            for(int i=1;i<n-1;i++){
                for(int j=0;j<p2;j++){
                    if(p1==j) cout<<sam;
                    else cout<<" ";
                }
                cout<<sam<<endl;
                p1--;
                p2++;
            }
            for(int i=0;i<2*n-1;i++)
                cout<<sam;
            cout<<endl;
        }
    }
}
