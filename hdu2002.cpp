#include<iostream>
using namespace std;
#define PI 3.1415927
int main(){
    double r;
    while(cin>>r){
        double V=4.0/3.0*PI*r*r*r;
        printf("%.3f\n",V);
    }
    return 0;
}
