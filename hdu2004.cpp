#include<iostream>
using namespace std;
int main(){
    int score;
    while(cin>>score){
        if(score<0||score>100) cout<<"Score is error!"<<endl;
        else {
            score=score/10;
            if(score>=9) cout<<"A"<<endl;
            else if(score==8) cout<<"B"<<endl;
            else if(score==7)cout<<"C"<<endl;
            else if(score==6)cout<<"D"<<endl;
            else cout<<"E"<<endl;
        }
    }
    return 0;
}
