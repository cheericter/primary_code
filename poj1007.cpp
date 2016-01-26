#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef struct{
    string str;
    int inv;
} DNA;
DNA d[100];
bool cmp(DNA a,DNA b){
    return a.inv<b.inv;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>d[i].str;
        int tmp=0;
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(d[i].str[j]>d[i].str[k])
                    tmp++;
            }
        }
        d[i].inv=tmp;
    }
    stable_sort(d,d+m,cmp);
    for(int i=0;i<m;i++){
        cout<<d[i].str<<endl;
    }
    return 1;
}
