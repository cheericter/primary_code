#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <utility>
#include <queue>
#include <stack>
#include <list>
#include <vector>
#include <cstdio>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        string s1="6";
        s1+=s.substr(6,5);
        cout<<s1<<endl;
    }
}



