#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
        double xx1,xx2,yy1,yy2,t;
        if (x1>x2) t=x1,x1=x2,x2=t;
        if (y1>y2) t=y1,y1=y2,y2=t;
        if (x3>x4) t=x3,x3=x4,x4=t;
        if (y3>y4) t=y3,y3=y4,y4=t;
        xx1=max(x1,x3);
        xx2=min(x2,x4);
        yy1=max(y1,y3);
        yy2=min(y2,y4);
        if(xx2>xx1&&yy2>yy1)
            printf("%.2f\n",(yy2-yy1)*(xx2-xx1));
        else printf("%.2f\n",0);
    }
}
