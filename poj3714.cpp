#include<iostream>
#include<algorithm>
#include<cmath>
#include <fstream>
#include<cstdio>
#include <iomanip>
using namespace std;
const int N=200000+1;
const double INF=1e100;
struct point{
    double x;
    double y;
    bool flag;
};
point m[N+1];
int tmp[N+1];
bool cmpx(point a,point b){
    return a.x<b.x;
}
bool cmpy(int a,int b){
    return m[a].y<m[b].y;
}
double dis(point a,point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
double mind(double a,double b){
    return a>b?b:a;
}
double mindis(point m[],int left,int right){
    double ans=INF;
    if(left==right) return ans;

    else if(left+1==right) {
        if(m[left].flag==m[right].flag)
            return ans;
        else
            return dis(m[left],m[right]);
    }

    int mid=(left+right)>>1;
    double minl=mindis(m,left,mid);
    double minr=mindis(m,mid+1,right);
    ans=mind(minl,minr);
    int index=0;
    for(int i=left;i<=right;i++){
        if(fabs(m[i].x-m[mid].x)<ans) tmp[index++]=i;
    }
    sort(tmp,tmp+index,cmpy);
    for(int i=0;i<index;i++)
    for(int j=i+1;j<index;j++){
        if(m[tmp[i]].y-m[tmp[j]].y>=ans) break;
        double d;
        if(m[tmp[i]].flag!=m[tmp[j]].flag&&(d=dis(m[tmp[i]],m[tmp[j]]))<ans)
            ans=d;
    }
    return ans;
}
int main(){
    int t;
    //freopen("input.txt","r",stdin);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>m[i].x>>m[i].y;
            m[i].flag=false;
        }
         for(int i=0;i<n;i++){
            cin>>m[n+i].x>>m[n+i].y;
            m[i+n].flag=true;
        }
        n=n<<1;
        sort(m,m+n,cmpx);
        double dismin=mindis(m,0,n-1);
        printf("%.3f\n",dismin);
    }
}
