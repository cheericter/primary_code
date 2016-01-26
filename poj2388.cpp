#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int a[10005];
int N;
void InsertSort(int a[],int N){
    for(int i=1;i<N;i++){
        int tmp=a[i];
        int j;
        for(j=i;j>0&&a[j-1]>tmp;j--)
            a[j]=a[j-1];
        a[j]=tmp;
    }
}
void swap(int *a ,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int median3(int a[],int left,int right){
    int mid=(left+right)/2;
    if(a[left]>a[right])  swap(&a[left],&a[right]);
    if(a[left]>a[mid])    swap(&a[left],&a[mid]);
    if(a[mid]>a[right])   swap(&a[mid],&a[right]);
    swap(&a[mid],&a[right-1]);
    return a[right-1];
}
void QuickSort(int a[],int left,int right){
    if(left+3<=right){
        int i=left;
        int j=right-1;
        int tmp=median3(a,left,right);
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
int main(){
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    //InsertSort(a,N);
    QuickSort(a,0,N-1);
    //sort(a,a+N);
    cout<<a[N/2]<<endl;
    return 0;
}
