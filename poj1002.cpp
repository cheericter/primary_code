#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;
int main(){
    bool flag=true;
    char nummap[26]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};
    char* innum=new char[8];
    innum[7]='\0';
    int n;
    cin>>n;
    string s;
    vector<int> p(n);
    for(int k=0;k<n;k++){
        cin>>s;
        for(int i=0,j=0;i<s.length();i++){
            if(s[i]!='-'){
                if(s[i]<'Z'&&s[i]>='A'){
                    innum[j++]=nummap[s[i]-'A'];
                }
                else{
                    innum[j++]=s[i];
                }
            }
        }
        p[k]=atoi(innum);
    }
    sort(p.begin(),p.end());

    for(int i=0,k=0;i<n-1;i++){
        if(p[i]==p[i+1])
            k++;
        else if(k>0){
            cout << setw(3) << setfill('0') << p[i]/10000 << '-' << setw(4) << setfill('0') << p[i]%10000 << ' ' << k+1 << endl;
            k=0;
            flag=false;
        }
        if(i==n-2&&k>0){
            cout << setw(3) << setfill('0') << p[i]/10000 << '-' << setw(4) << setfill('0') << p[i]%10000 << ' ' << k+1 << endl;
            flag=false;
        }
    }

    if(flag){
        cout << "No duplicates." << endl;
    }
    return 1;
}
