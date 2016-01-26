#include<iostream>
#include<memory.h>
#include<vector>
#include<fstream>
using namespace std;
#define MAX_V 1006
int V;
vector<int> G[MAX_V];
int match[MAX_V];
bool used[MAX_V];
void add_edge(int u,int v){
    G[u].push_back(v);
    G[v].push_back(u);
}
bool dfs(int v){
    used[v]=true;
    for(int i=0;i<G[v].size();i++){
        int u=G[v][i],w=match[u];
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
    //clear match
    memset(match,-1,sizeof(match));
    for(int v=0;v<V;v++){
        if(match[v]<0){
            memset(used,0,sizeof(used));
            if(dfs(v))  res++;//dfs[v]  ¾Ó   È»²»±¨´í£¡£¡£¡£¡£¡£¡£¡£¡
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
