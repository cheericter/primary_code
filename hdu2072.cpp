#include<string>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
map<string,int> a;
vector<string> b;
pair<string ,int > tmp;
void SplitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
  std::string::size_type pos1, pos2;
  pos2 = s.find(c);
  pos1 = 0;
  while(std::string::npos != pos2)
  {
    v.push_back(s.substr(pos1, pos2-pos1));

    pos1 = pos2 + c.size();
    pos2 = s.find(c, pos1);
  }
  if(pos1 != s.length())
    v.push_back(s.substr(pos1));
}
int main(){
    string s;
    while(getline(cin,s)&&s!="#"){
        a.clear();
        b.clear();
        const string ss=" ";
        SplitString(s,b,ss);
        for(int i=0;i<b.size();i++){
            if(b[i]!="")
           a[b[i]]=1;
        }
        cout<<a.size()<<endl;
    }
    return 0;
}
