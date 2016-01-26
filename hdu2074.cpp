#include<iostream>
#include<memory.h>
#include<queue>
using namespace std;
char s[85][85];
int dir[8][2]={{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}};
int n;
char a,b;
struct point{
int x,y;
char c;
};
queue<point> que;
point p;
void bfs(int x,int y,char ch){
    que.push((point){x,y,ch});
    s[x][y]=ch;
    while(!que.empty()){
        p=que.front();
        que.pop();
        for(int i=0;i<8;i++){
            int xx=p.x+dir[i][0],yy=p.y+dir[i][1];
            if(!(xx<0||xx>n-1||yy<0||yy>n-1)&&(s[xx][yy]!=a&&s[xx][yy]!=b)){
                s[xx][yy]=a+b-p.c;
                que.push((point){xx,yy,a+b-p.c});
            }

        }
    }
}
int main(){
    int t=0;
    while(cin>>n){
        if(t>0) cout<<endl;
            t++;
        memset(s,0,sizeof(s));
        cin>>a>>b;
        int mid=n/2;

        bfs(mid,mid,a);

        if(n>1){
            s[0][0]=' ';
            s[n-1][0]=' ';
            s[0][n-1]=' ';
            s[n-1][n-1]=' ';
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<s[i][j];
            }
            cout<<endl;
        }

    }
}
