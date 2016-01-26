#include<iostream>
#include<stdio.h>
using namespace std;
struct color{
    int r;
    int g;
    int b;
} c[16];
int main(){
    for(int i=0;i<16;i++)
        cin>>c[i].r>>c[i].g>>c[i].b;
    int r,g,b;

    while(cin>>r>>g>>b&&b!=-1){
        int sel,min=255*255*3+1;
        for(int i=0;i<16;i++){
            int dis=(c[i].r-r)*(c[i].r-r)+(c[i].g-g)*(c[i].g-g)+(c[i].b-b)*(c[i].b-b);
            if(dis<min) {
                    min=dis;sel=i;
            }
        }
       // printf("(%d,%d,%d) maps to (%d,%d,%d)\n",r,g,b,c[sel].r,c[sel].g,c[sel].b);
       cout<<"("<<r<<","<<g<<","<<b<<") maps to ("<<c[sel].r<<","<<c[sel].g<<","<<c[sel].b<<")"<<endl;
    }
    return 1;
}
