#include<iostream>
#include<cstdlib>
using namespace std;
int a[1005];
int tmp[1005];
int inv=0;
void mergeArray(int a[],int left,int mid,int right,int tmp[]){
    int i,j;
    i=left;
    j=mid+1;
    int n=0;
    while(i<=mid&&j<=right){
        if(a[i]<=a[j]) {
            tmp[n++]=a[i];
            i++;
        }
        else {
            tmp[n++]=a[j];
            j++;
            inv+=mid-i+1;
        }
    }
    if(i<=mid){
        while(i<=mid) tmp[n++]=a[i++];
    }
    if(j<=right){
        while(j<=right) tmp[n++]=a[j++];
    }
    for(int i=left;i<=right;i++){
        a[i]=tmp[i-left];
    }
}
void mergeSort(int a[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);
        mergeArray(a,left,mid,right,tmp);
    }
}
int main(){

    int N;
    cin>>N;
    int cnt=0;
    while(N--){
        inv=0;
        int n;
        cin>>n;
        cnt++;
        for(int i=0;i<n;i++)
            cin>>a[i];
        mergeSort(a,0,n-1);
        cout<<"Scenario #"<<cnt<<":"<<endl<<inv<<endl<<endl;
    }
}
