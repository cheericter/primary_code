#include<iostream>
using namespace std;
int field[100][100]={0};
int cnt;
int N,M,K;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
void dfs(int x,int y){
    if(field[x][y]) {
        field[x][y]=0;
        cnt++;
    }
    for(int i=0;i<4;i++){
        int xx,yy;
        xx=x+dir[i][0];
        yy=y+dir[i][1];
        if(xx>=0&&xx<N&&yy>=0&&yy<M&&field[xx][yy])
            dfs(xx,yy);
    }
}
int main(){

    cin>>N>>M>>K;
    for(int i=0;i<K;i++){
        int row,col;
        cin>>row>>col;
        field[row-1][col-1]=1;
    }
    int max=0;
    for(int i=0;i<N;i++)
    for(int j=0;j<M;j++){
        cnt=0;
        dfs(i,j);
        if(cnt>max) max=cnt;
    }
    cout<<max<<endl;
    return 1;
}
