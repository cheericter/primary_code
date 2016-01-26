#include<iostream>
using namespace std;
int main()
{
    double d;
    double l=0;
    while(cin>>d&&d!=0.00){
        int n=1;
        l=0;
        for(;;){
            l+=1.0/(n+1.0);
            if(l>=d)
                break;
            n++;
        }
        cout<<n<<" card(s)"<<endl;
    }
    return 1;
}
