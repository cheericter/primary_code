#include<stack>
#include<string>
#include<iostream>
using namespace std;
stack<string> forward;
stack<string> backward;
string tmp,now;
int main(){
    now="http://www.acm.org/";
    while(cin>>tmp&&tmp.compare("QUIT")){
        if(!tmp.compare("VISIT")){
            backward.push(now);
            cin>>now;
            cout<<now<<endl;
            while(!forward.empty()){
                forward.pop();
            }
        }
        else if(!tmp.compare("BACK")){
            if(!backward.empty()){
                forward.push(now);
                now=backward.top();
                backward.pop();
                cout<<now<<endl;
            }else{
                cout<<"Ignored"<<endl;
            }
        }
        else if(!tmp.compare("FORWARD")){
            if(!forward.empty()){
                backward.push(now);
                now=forward.top();
                forward.pop();
                cout<<now<<endl;
            }else{
                cout<<"Ignored"<<endl;
            }
        }
    }
    return 1;
}
