#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;
#define MAX_V 205
#define INF 1000000000
struct edge{
    int to,cap,rev;
};
vector<edge> G[MAX_V];
bool used[MAX_V];
void add_edge(int from ,int to,int cap){
    G[from].push_back((edge){to,cap,G[to].size()});
    G[to].push_back((edge){from,0,G[from].size()-1});
}
int dfs(int v,int t ,int f){
    if(v==t) return f;
    used[v]=true;
    for(int i=0;i<G[v].size();i++){
        edge &e=G[v][i];
        if(!used[e.to]&&e.cap>0){
            int d=dfs(e.to,t,min(f,e.cap));
            if(d>0){
                e.cap-=d;
                G[e.to][e.rev].cap+=d;
                return d;
            }
        }
    }
    return 0;//曾经WA在此处,  默认返回1
}
//int test(){}//返回1
int max_flow(int s,int t){
    int flow=0;
    for(;;){
        memset(used,0,sizeof(used));
        int f=dfs(s,t,INF);
        if(f==0) return flow;
        flow+=f;
    }
}
int main(){
    int N,M;
   // cout<<test()<<endl;
    while(cin>>N>>M){
            int a,b,c;
        memset(G,0,sizeof(G));
        for(int i=0;i<N;i++){
            cin>>a>>b>>c;
            add_edge(a,b,c);
        }
        cout<<max_flow(1,M)<<endl;
    }
}
