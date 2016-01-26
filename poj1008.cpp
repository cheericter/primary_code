#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
char haab_mon[19][10] = {"pop", "no", "zip", "zotz", "tzec",
      "xul", "yoxkin","mol", "chen", "yax",
      "zac", "ceh", "mac", "kankin", "muan",
      "pax", "koyab", "cumhu","uayet"};
char tz_day[20][10] = {"imix", "ik", "akbal", "kan", "chicchan",
      "cimi", "manik", "lamat","muluk", "ok",
      "chuen", "eb", "ben", "ix", "mem",
      "cib", "caban", "eznab", "canac", "ahau"};
void cal(char* day,char* month,int year){
    int n=strlen(day);
    int d=0;
    int sum_days=0;
    for(int i=0;i<n-1;i++){
        d*=10;
        d+=day[i]-'0';
    }
    int m;
    for(m=0;m<19;m++){
        if(!strcmp(haab_mon[m],month)) break;
    }
    sum_days+=year*365+m*20+d;

    year=sum_days/260;
    int mname=sum_days%260%20;
    int dname=sum_days%260%13+1;
    cout<<dname<<" "<<tz_day[mname]<<" "<<year<<endl;
}
int main(){
    char day[10];
    char month[10];
    int year;
    int n;
    cin>>n;
    cout<<n<<endl;
    while(n--){
        cin>>day>>month>>year;
        cal(day,month,year);
    }
}
