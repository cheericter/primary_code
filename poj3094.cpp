#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char input[300];
    while(true){
        gets(input);
        if(!strcmp(input,"#"))break;
        int  sum=0;
        for(int i=0;i<strlen(input);i++){
            if(input[i]==' ')  continue;
            else sum+=(i+1)*(input[i]-'A'+1);
        }
        cout<<sum<<endl;
    }
    return 1;
}
