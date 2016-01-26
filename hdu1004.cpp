#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int N;
    while(cin>>N&&N){
        map<string,int> balloon;
        string color;
        while(N--){
            cin>>color;
            balloon[color]++;
        }
        int max=0;
        map<string, int>::iterator it;
        for(it=balloon.begin();it!=balloon.end();it++){
            if(it->second>max) {
                max=it->second;
                color=it->first;
            }
        }
        cout<<color<<endl;
    }
}
