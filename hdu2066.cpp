#include<iostream>
#include<vector>
#include<fstream>
#include<memory.h>
#include<queue>
using namespace std;
#define INF 1000000000
#define MAX_V 1005

typedef pair<int,int>  P;

int d[MAX_V];
struct edge{int to,cost;};
vector<edge> G[MAX_V];

int SS[MAX_V],DD[MAX_V];

void dijkstra(int s){
    fill(d,d+MAX_V,INF);
    priority_queue<P,vector<P>,greater<P> > que;
    d[s]=0;
    que.push(P(0,s));
    while(!que.empty()){
        P p=que.top();que.pop();
        int v=p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<G[v].size();i++){
            edge &e=G[v][i];
            if(d[v]+e.cost<d[e.to]){
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}
bool used[MAX_V];
int V=0;

void dijkstra_slow(int s){
    fill(d,d+MAX_V,INF);
    fill(used,used+MAX_V,false);
    d[s]=0;
    while(true){
        int v=-1;
        for(int u=1;u<=V;u++){
            if(!used[u]&&(v==-1||d[u]<d[v])) v=u;
        }
        if(v==-1) break;
        used[v]=true;
        for(int i=0;i<G[v].size();i++){
            edge &e=G[v][i];
            d[e.to]=min(d[e.to],d[v]+e.cost);
        }
    }
    //for(int i=1;i<=V;i++)
    //    cout<<"d["<<i<<"]  :"<<d[i]<<endl;
}
void bellman_ford(int s){
    fill(d,d+MAX_V,INF);
    d[s]=0;
    while(true){
        bool update=false;
        for(int u=1;u<=V;u++){
            for(int j=0;j<G[u].size();j++){
                edge &e=G[u][j];
                if(d[u]!=INF&&d[e.to]>d[u]+e.cost){
                    update=true;
                    d[e.to]=d[u]+e.cost;
                }
            }
        }
        if(!update) break;
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    int T,S,D;
    while(cin>>T>>S>>D){
        //Çå¿ÕÍ¼
        V=0;
        memset(G,0,sizeof(G));
        for(int i=0;i<T;i++){
            int a,b,time;
            cin>>a>>b>>time;
            G[a].push_back((edge){b,time});
            G[b].push_back((edge){a,time});
            V=max(a,V);
            V=max(b,V);
        }
        for(int i=0;i<S;i++){
            cin>>SS[i];
        }
        for(int i=0;i<D;i++){
            cin>>DD[i];
        }
        int mind=INF;
        for(int i=0;i<S;i++){
            bellman_ford(SS[i]);
            for(int j=0;j<D;j++){
                mind=min(mind,d[DD[j]]);
            }
        }
        cout<<mind<<endl;
    }
}
