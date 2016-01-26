#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
} p[705];
int main(){
    int N,temp;
    while(cin>>N,N){
        for(int i=0;i<N;i++)
            cin>>p[i].x>>p[i].y;
        int max=0;
        for(int i=0;i<N;i++){

            for(int j=i+1;j<N;j++){
                 temp=0;
                for(int k=j+1;k<N;k++){
                    int a=(p[i].x-p[j].x)*(p[j].y-p[k].y);
                    int b=(p[i].y-p[j].y)*(p[j].x-p[k].x);
                    if(a==b) temp++;
                }
                temp+=2;
                if(temp>max) max=temp;
            }
        }
        cout<<max<<endl;
    }
}
