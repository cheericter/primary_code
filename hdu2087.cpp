#include<string>
#include<iostream>
using namespace std;
#define MAX_N 1005
int jump[MAX_N];
string s,p;
int slen,plen;
void getjump(int *jump){
    jump[0]=0;
    for(int i=1;i<plen-1;i++){
        if(p[i]==p[jump[i-1]]) jump[i]=jump[i-1]+1;
        else if(p[i]==p[0]) jump[i]=1;
        else jump[i]=0;
    }
    for(int i=plen-1;i>0;i--)
        jump[i]=jump[i-1];
    jump[0]=-1;
}
int kmp_search(){
    int i=0,j=0;
    int ans=0;
    while(i<slen){
        if(j==-1||s[i]==p[j]){
            i++;j++;
        }
        else {
            j=jump[j];
        }
        if(j==plen){
            ans++;
            j=0;
        }
    }
    return ans;
}
int main(){
    while(cin>>s,s[0]!='#'){
        cin>>p;
        slen=s.size();
        plen=p.size();
        getjump(jump);
        cout<<kmp_search()<<endl;
    }
}
