#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
bool contain(const char* a,const char * b){
    int i=0,j=0;
    int la=strlen(a);
    int lb=strlen(b);
    while(i<la&&j<lb){
        if(a[i]==b[j])
            i++;
        j++;
    }
    if(i==la) return true;
    else return false;
}
char a[100001],b[100001];
int main(){

    while(scanf("%s %s",a,b)!=EOF){
        if(contain(a,b)) printf("%s\n","Yes");
        else printf("%s\n","No");
    }
    return 1;
}
