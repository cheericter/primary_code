/*

因为：Ai=(Ai-1+Ai+1)/2 - Ci,
      A1=(A0  +A2  )/2 - C1;
      A2=(A1  +  A3)/2 - C2 , ...
=>    A1+A2 = (A0+A2+A1+A3)/2 - (C1+C2)
      2[(A1+A2)+(C1+C2)] = A0+A2+A1+A3;
      A1+A2 = A0+A3 - 2(C1+C2);
=>    A1+A2 =  A0+A3 - 2(C1+C2)
同理可得：
      A1+A1 =  A0+A2 - 2(C1)
      A1+A2 =  A0+A3 - 2(C1+C2)
      A1+A3 =  A0+A4 - 2(C1+C2+C3)
      A1+A4 =  A0+A5 - 2(C1+C2+C3+C4)
      ...
      A1+An = A0+An+1 - 2(C1+C2+...+Cn)
----------------------------------------------------- 左右求和
     (n+1)A1+(A2+A3+...+An) = nA0 +(A2+A3+...+An) + An+1 - 2(nC1+(n-1)C2+...+2Cn-1+Cn)

=>   (n+1)A1 = nA0 + An+1 - 2(nC1+(n-1)C2+...+2Cn-1+Cn)

=>   A1 = [nA0 + An+1 - 2(nC1+(n-1)C2+...+2Cn-1+Cn)]/(n+1)
*/
#include<iostream>
#include<cstdio>
using namespace std;
#define MAX_N 3003
double A0,An,C[MAX_N];
int n;
int main(){
    while(cin>>n){
       double res=0;
       cin>>A0>>An;
       res+=n*A0+An;
       for(int i=0;i<n;i++){
            scanf("%lf",&C[i]);
            res-=2*C[i]*(n-i);
       }
       res/=(n+1);
       printf("%.2f\n",res);
    }
}
