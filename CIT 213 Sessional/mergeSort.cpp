#include <iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1,len2;
    len1=mid-s+1;
    len2=e-mid;
    int first[len1];
    int second[len2];
    int mainIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndex++];
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex++];
    }
    mainIndex=s;
    int index1=0,index2=0;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++]=first[index1++];
        }else{
            arr[mainIndex++]=second[index2++];
        }
    }
    while(index1<len1){
           arr[mainIndex++]=first[index1++];
        
    }
    while(index2<len2){
           arr[mainIndex++]=second[index2++];
        
    }
    //
    
}
void mergeSort(int *arr,int s,int e){
    if(s>=e)
        return;
    
    int mid=(s+e)/2;
    
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main() {

    int arr[]={1,5,2,6,8,2,4,6};
    int n=8;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}