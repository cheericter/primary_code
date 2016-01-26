#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int arr[6][6];
int main(){

    arr[0][1]=2;arr[0][2]=4;arr[0][4]=5;arr[0][5]=1;
    arr[1][2]=0;arr[1][5]=3;arr[1][0]=5;arr[1][3]=2;
    arr[2][0]=1;arr[2][3]=4;arr[2][1]=3;arr[2][4]=0;
    arr[3][1]=5;arr[3][4]=2;arr[3][2]=1;arr[3][5]=4;
    arr[4][0]=2;arr[4][3]=5;arr[4][2]=3;arr[4][5]=0;
    arr[5][4]=3;arr[5][1]=0;arr[5][0]=4;arr[5][3]=1;
    int N;
    cin>>N;
    while(N--){
        int dis[6]={0,0,0,0,0,0};
        for(int i=0;i<6;i++)
            dis[i]=0;
        int to=0;
        int head=2;
        char a[10];
        int d;
        int l;
        cin>>l;
        while(l--){
            cin>>a>>d;
            if(!strcmp(a,"forward")){
                    ;
            }else if(!strcmp(a,"back")){
                to=to>2?to-3:to+3;
            }else if(!strcmp(a,"left")){
                to=arr[head][to];
                 to=to>2?to-3:to+3;
            }else if(!strcmp(a,"right")){
                 to=arr[head][to];

            }else if(!strcmp(a,"down")){
                int tmp=head;
                head=to;
                to=tmp>2?tmp-3:tmp+3;
            }else if(a[0]=='u'){
                int tmp=to;
                to=head;
                head=tmp>2?tmp-3:tmp+3;
            }
            if(to<6)
                dis[to]+=d;
        }
        printf("%d %d %d %d\n",dis[0]-dis[3],dis[1]-dis[4],dis[2]-dis[5],to);
    }
}
