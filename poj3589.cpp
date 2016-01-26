#include<cstring>
#include<cstdio>
#include<iostream>;
using namespace std;
int main(){
    int N;
    char a[10],b[10];
    cin>>N;
    for(int i=0;i<N;i++){
        scanf("%s %s",a,b);

        int aa=0,bb=0;
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                if(a[i]==b[j]) {bb++;break;}
        for(int i=0;i<4;i++)
            if(a[i]==b[i])aa++;
        cout<<aa<<"A"<<bb-aa<<"B"<<endl;
    }
    return 1;
}

