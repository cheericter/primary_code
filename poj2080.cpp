#include<iostream>
#include<string>
using namespace std;
string week[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isleap(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    else return false;
}
int weekFromN(int n){
    return n%7;
}
int main(){
    int N;

    while(cin>>N,N!=-1){
        int year=2000;
        int w=weekFromN(N);
        N++;
        for(;;year++){
            int DayPerYear=365;
            if(isleap(year)) DayPerYear+=1;
            if(N>DayPerYear) N-=DayPerYear;
            else break;
        }
        if(isleap(year)) day[2]=29;
        else day[2]=28;
        int month;
        for(int i=1;i<=12;i++){
            if(N>day[i])
                N-=day[i];
            else {
                month=i;
                break;
            }
        }
        cout<<year<<"-";
        if(month<10) cout<<"0";
        cout<<month<<"-";
        if(N<10) cout<<"0";
        cout<<N<<" "<<week[w]<<endl;
    }
}
