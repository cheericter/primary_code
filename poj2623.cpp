#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
using namespace std;
long long a[250050];
long long N;
void InsertSort(long long a[],long long N){
    for(long long i=1;i<N;i++){
        long long tmp=a[i];
        long long j;
        for(j=i;j>0&&a[j-1]>tmp;j--)
            a[j]=a[j-1];
        a[j]=tmp;
    }
}
void swap(long long *a ,long long *b){
    long long tmp=*a;
    *a=*b;
    *b=tmp;
}
long long median3(long long a[],long long left,long long right){
    long long mid=(left+right)/2;
    if(a[left]>a[right])  swap(&a[left],&a[right]);
    if(a[left]>a[mid])    swap(&a[left],&a[mid]);
    if(a[mid]>a[right])   swap(&a[mid],&a[right]);
    swap(&a[mid],&a[right-1]);
    return a[right-1];
}
void QuickSort(long long a[],long long left,long long right){
    if(left+3<=right){
        long long i=left;
        long long j=right-1;
        long long tmp=median3(a,left,right);
        for(;;){
            while(a[++i]<tmp);
            while(a[--j]>tmp);
            if(i<j)
                swap(&a[i],&a[j]);
            else
                break;
        }
        swap(&a[i],&a[right-1]);
        QuickSort(a,left,i-1);
        QuickSort(a,i+1,right);
    }
    else{
        InsertSort(a+left,right-left+1);
    }
}
int comp(const int *a, const int *b)
{
    return (*a - *b);
}
int main(){
    cin>>N;
    for(long long i=0;i<N;i++)
        cin>>a[i];
    //InsertSort(a,N);
    QuickSort(a,0,N-1);
    //sort(a,a+N,comp);
    if(N%2!=0)
        printf("%.1f\n",(double)a[(N + 1) / 2 - 1]);
    else
        printf("%.1f\n",(a[N/2-1]+a[N/2])/2.0);
    return 0;
}
