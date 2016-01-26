#include<iostream>
#include<cstdio>
using namespace std;
struct point{
    int x;
    int y;
} a[105];
int main(){
    int n;
    while(cin>>n,n!=0){
        cin>>a[0].x>>a[0].y;
        for(int i=1;i<n;i++){
            cin>>a[i].x>>a[i].y;
            a[i].x-=a[0].x;
            a[i].y-=a[0].y;
        }
        double area=0;
        for(int i=2;i<n;i++){
            area+=(a[i-1].x*a[i].y-a[i].x*a[i-1].y)/2.0;
        }
        printf("%.1f\n",area);
    }
}
