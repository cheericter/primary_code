#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N&&N){
        int sum=0;
        int min=30;
        char tmp;
        getchar();
        for(int j=0;j<N;j++){
            int cnt=0;
            for(int i=0;i<25;i++){
               scanf("%c",&tmp);
               // cout<<tmp<<" ";
                if(tmp==' ') cnt++;
            }
            if(cnt<min) min=cnt;
            sum+=cnt;
            getchar();
        }
        cout<<sum-N*min<<endl;
    }
}
