#include<iostream>
using namespace std;
int main()
{
    int N,Q;
    int t[109];
    while(cin>>N>>Q,Q!=0){
        for(int i=0;i<105;i++)
            t[i]=0;
        for(int i=0;i<N;i++){
            int day;
            cin>>day;
            for(int j=0;j<day;j++){
                int d;
                cin>>d;
                t[d]++;
            }
        }
        int date,max=-1;
        for(int i=0;i<105;i++){
            //    cout<<t[i]<<" ";
            if(t[i]>max){
                max=t[i];
                date=i;
            }
        }
        max-=Q;
        if(max<0) cout<<0<<endl;
        else
            cout<<date<<endl;
    }
    return 1;
}
