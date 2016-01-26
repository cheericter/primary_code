#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double sum=0,d;
    for(int i=0;i<12;i++){
        cin>>d;
        sum+=d;
    }
    printf("$%.2f",sum/12);
    //cout<<"$"<<sum<<endl;
    return 1;
}
