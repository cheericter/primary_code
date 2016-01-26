#include<iostream>
using namespace std;
int cache[14];
int main(){
    int k;
    while(cin>>k&&k!=0){
        if(!cache[k]){
            int answer=1;
            while(!cache[k]){
                int rest=2*k;
                int next=0;
                int count=0;
                for(;;){
                    if(count==k) cache[k]=answer;
                    next=(next+answer-1)%rest;
                    if(next<k) break;
                    rest--;
                    count++;
                }
                answer++;
                //cout<<answer<<endl;
            }
            cout<<cache[k]<<endl;
        }else{
            cout<<cache[k]<<endl;
        }
    }
    return 1;
}
