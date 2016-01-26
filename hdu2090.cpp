#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    string s;
    double p;
    double c;
    double sum=0;
    while(cin>>s>>c>>p){
        sum+=c*p;
    }
    printf("%.1f\n",sum);
}
