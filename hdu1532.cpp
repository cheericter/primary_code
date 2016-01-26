#include<iostream>
#include<vector>
#include<memory.h>
#include<cmath>
using namespace std;
#define MAX_V 205
#define INF  100000000
struct edge{
    int to,cap,inv;
};
bool used[MAX_V];
vector<edge> G[MAX_V];
void add_edge(int from,int to,int cap){
    G[from].push_back( (edge) { to, cap, G[to].size() } );
    G[to].push_back( (edge) { from , 0, G[from].size()-1 } );
}
//find one road
int dfs(int s,int t,int cap){
    if(s==t) return cap; //return capacity of a new road
    used[s]=true;
    for(int i=0;i<G[s].size();i++){  //each edge from s
        edge &e=G[s][i];
        if(!used[e.to]&&e.cap>0){  //WA :miss  e.cap>0
            int d= dfs(e.to,t,min(cap,e.cap));
            if(d>0) {
                e.cap-=d;
                G[e.to][e.inv].cap+=d;
                return d;
            }
        }
    }
    return 0;
}
__int64 max_flow(int s,int t){
    __int64 x=0;
    for(;;){
        memset(used,0,sizeof(used));
        int cap=dfs(s,t,INF);
        if(cap==0) return x;
        x+=cap;
    }
}
int main(){
    int N,M;
    while(cin>>N>>M){
        memset(G,0,sizeof(G));
        for(int i=0;i<N;i++){
            int a,b,c;
            cin>>a>>b>>c;
            add_edge(a,b,c);
        }
        cout<<max_flow(1,M)<<endl;
    }
}
