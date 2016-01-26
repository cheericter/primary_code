#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double dis_from_zero(int x,int y){
    double res=0;
    if(x==0&&y==0) res=0;
    else{
        res=0;
        int s=x+y;
        for(int i=1;i<=s;i++){
            res+=sqrt((i-1)*(i-1)+i*i)+sqrt(2*i*i);
        }
        res-=sqrt((s-x)*(s-x)+y*y);
    }
    return res;
}
int main(){
    int cas;
    cin>>cas;
    while(cas--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        printf("%.3f\n",fabs(dis_from_zero(x1,y1)-dis_from_zero(x2,y2)));
    }

}
