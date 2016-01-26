#include<iostream>
#include<algorithm>
using namespace std;
int num;
int de=0;
bool used[70];
int arr[70]={0};

bool dfs(int l,int step){
    de++;
    if(l==0) return true;
    int pre=-1;
    for(int i=0;i<num;i++){
        if(!used[i]&&l>=arr[i]&&pre!=arr[i]){
            //used[i]=true;
            pre=arr[i];
            if(dfs(l-arr[i],step+1)){
                used[i]=true;
                return true;
            }else if(step==1) return false;
            //used[i]=false;
        }
    }

    return false;
}
int main(){
    int sum=0,flag=1;
    while(cin>>num&&num!=0){
        sum=0;
        int max=-1;
        de=0;
        for(int i=0;i<num;i++){
            used[i]=false;
            cin>>arr[i];
            if(arr[i]>max)  max=arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+num);
        for(int i=sum/max;i>0;i--){
            if(sum%i!=0) continue;
            flag=1;
            for(int j=0;j<i;j++){
                if(!dfs(sum/i,1)){
                    flag=0;
                    break;
                }
            }
            if(flag){
                    cout<<sum/i<<endl;
                    //cout<<de<<endl;
                    break;
            }
        }
        if(flag!=1) cout<<sum<<endl;
    }
    return 1;
}
