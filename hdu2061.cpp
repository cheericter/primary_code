#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int k;
        cin>>k;
        string s;
        bool e=true;
        double c,score,sum,sumc;
        sum=0;
        sumc=0;
        for(int i=0;i<k;i++){
             cin>>s;
             cin>>c>>score;
             sum+=score*c;
             sumc+=c;
             if(score<60) e=false;
        }
        if(e) printf("%.2f\n",sum/sumc);
        else cout<<"Sorry!"<<endl;
        if(N!=0)
            cout<<endl;

    }
}
