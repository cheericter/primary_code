#include<iostream>
#include<cstdlib>
using namespace std;
__int64 a[500005];
__int64 tmp[500005];
__int64 inv=0;
void mergeArray(__int64 a[],__int64 left,__int64 mid,__int64 right,__int64 tmp[]){
    __int64 i,j;
    i=left;
    j=mid+1;
    __int64 n=0;
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
    for(__int64 i=left;i<=right;i++){
        a[i]=tmp[i-left];
    }
}
void mergeSort(__int64 a[],__int64 left,__int64 right){
    if(left<right){
        __int64 mid=(left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);
        mergeArray(a,left,mid,right,tmp);
    }
}
int main(){

    __int64 N;
    while(cin>>N,N!=0){
        inv=0;
        for(__int64 i=0;i<N;i++)
            cin>>a[i];
        mergeSort(a,0,N-1);
        cout<<inv<<endl;
    }
}
