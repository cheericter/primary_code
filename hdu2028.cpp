#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int n,a,b,c,i;
    while(cin>>n)
    {
        cin>>a;
        for(i=1;i<n;i++)
        {
            cin>>b;;
            c=gcd(a,b);
            a=a/c*b;
        }
        cout<<a<<endl;
    }
    return 0;
}
