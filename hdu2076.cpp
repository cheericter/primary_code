#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double ts;
    double h,m,s;
    double T;
    cin>>T;
    while(T--){
        cin>>h>>m>>s;
        if(h>12) h-=12;
        ts=m*60+s;
        double theta1=0,theta2=0;
        theta1=(h+ts/3600)*30;
        theta2=(m+s/60)*6;
        theta1=fabs(theta1-theta2);
        if(theta1>180) theta1=360-theta1;
        int  th=floor(theta1);
        cout<<th<<endl;
    }
}
