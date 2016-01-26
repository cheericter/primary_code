#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool cmp(const char &a,const char &b){
    char aa,bb;
    if(a <= 'Z' && a >= 'A')  aa=a+'a'-'A';
    else aa=a;
    if(b <= 'Z' && b >= 'A')  bb=b+'a'-'A';
    else bb=b;
    if(aa==bb)
    {
        if((aa==a&&bb!=b)){
            return false;
        }
        if((aa!=a&&bb==b)){
            return true;
        }
        else return false;
    }
    else return aa<bb;
}
int main(){
    int N;
    char str[15];
    cin>>N;
    while(N--){
        cin>>str;
        int len=strlen(str);
        sort(str,str+len,cmp);
         cout << str << endl;
        while(next_permutation(str,str+len,cmp)){
            cout<<str<<endl;
        }

    }
    return 1;
}
