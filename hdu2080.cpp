#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <utility>
#include <queue>
#include <stack>
#include <list>
#include <vector>
#include <cstdio>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;
#define PI 3.1415926
int main(){
    double  x1,y1,x2,y2;
    int T;
    cin>>T;
    while(T--){
        cin>>x1>>y1>>x2>>y2;
        double theta=acos((x1*x2+y1*y2)/sqrt(x1*x1+y1*y1)/sqrt(x2*x2+y2*y2))*180/PI;
        printf("%.2f\n",theta);
    }
}
