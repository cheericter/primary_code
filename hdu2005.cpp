#include<iostream>
#include<cstdio>
using namespace std;
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int y,m,d;
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
        if((y%4==0&&y%100!=0)||y%400==0)days[2]=29;
        else days[2]=28;
        int sum=0;
        for(int i=1;i<m;i++){
            sum+=days[i];
        }
        sum+=d;
        cout<<sum<<endl;
    }
    return 0;
}
