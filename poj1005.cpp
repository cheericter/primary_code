#include<iostream>
using namespace std;
#define PI 3.1415926
int main(){
    int n;
    cin>>n;
    double x,y;
    int index=0;
    while(n-->0){
        cin>>x>>y;
        double area=(x*x+y*y)*PI/2;
        double sum=0;
        int year=1;
        index++;
        for(;;){
            sum=50*year;
            if(sum>area) break;
            year++;
        }
        cout<<"Property "<<index<<": This property will begin eroding in year "<<year<<"."<<endl;
    }
     cout<<"END OF OUTPUT."<<endl;
    return 1;
}
