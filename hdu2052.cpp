#include<iostream>
using namespace std;
int main(){
    int w,h;
    while(cin>>w>>h){
        for(int i=0;i<=h+1;i++){

            if(i==0||i==h+1){
                for(int j=0;j<=w+1;j++){
                    if(j==0||j==w+1)
                        cout<<"+";
                    else cout<<"-";
                }
                cout<<endl;
            }
            else{
                for(int j=0;j<=w+1;j++){
                    if(j==0||j==w+1)
                        cout<<"|";
                    else cout<<" ";
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }
}
