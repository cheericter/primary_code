#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;
#define MAX_V 1005
int match[MAX_V];
bool used[MAX_V];
int V;
vector<int> G[MAX_V];
void add_edge(int u,int v){
    G[v].push_back(u);
    G[u].push_back(v);
}
bool dfs(int v){
    used[v]=true;
    for(int i=0;i<G[v].size();i++){
        int u=G[v][i];
        int w=match[u];
        if(w<0||!used[w]&&dfs(w)){
            match[v]=u;
            match[u]=v;
            return true;
        }
    }
    return false;
}
int bipartite_matching(){
    int res=0;
    memset(match,-1,sizeof(match));
    for(int i=0;i<V;i++){
        if(match[i]<0){
            memset(used,0,sizeof(used));
            if(dfs(i)) res++;
        }
    }
    return res;
}
int main(){
    //freopen("in.txt","r",stdin);
    int k,m,n;
    while(cin>>k,k){
        cin>>m>>n;
        V=m+n;
        memset(G,0,sizeof(G));
        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            add_edge(a-1,b+m-1);
        }
        cout<<bipartite_matching()<<endl;
    }
}
