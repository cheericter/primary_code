#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string a,b;
    int t;
    cin>>t;
    int cnt=0;
    for(cnt=1;cnt<=t;cnt++){
        cin>>a>>b;
        int i=a.size()-1,j=b.size()-1;
        char c[1009];
        fill(c,c+1009,0);
        int index=0;
        int ad=0,pre=0;
        int tmpsum;
        while(i>=0||j>=0){

            char aa,bb;
            if(j<0) bb='0';
                else bb=b[j--];
            if(i<0) aa='0';
                else aa=a[i--];
            tmpsum=aa+bb-'0'-'0'+pre;
           // cout<<tmpsum<<" ";
            if(tmpsum>=10){
                ad=1;
                tmpsum-=10;
            }else ad=0;
            c[index++]=tmpsum+'0';
            pre=ad;
            //cout<<c[index-1]<<" ";
        }
        if(pre==1){
            c[index++]='0'+pre;
        }
        while((--index)>=1&&c[index]=='0');
        cout<<"Case "<<cnt<<":\n"<<a<<" + "<<b<<" = ";
       // if(c[index])cout<<(c[index]+'0')<<endl;
        for(int k=index;k>=0;k--){
            cout<<c[k];
        }
        cout<<endl;
        if(cnt!=t)
        cout<<endl;
    }
    return 0;
}
