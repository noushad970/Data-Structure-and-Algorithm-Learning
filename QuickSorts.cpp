#include <iostream>
using namespace std;
int pertition(int *arr,int s,int e){
    int pivot=arr[s],pivotIndex=0,i=s,j=e;
    int temp=0;
    for(int x=s+1;x<=e;x++)
    {
        if(pivot>=arr[x]){
            temp++;
        }
    }
    pivotIndex=s+temp;
    swap(arr[s],arr[pivotIndex]);
    while(i<pivotIndex && j>pivotIndex){
        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        swap(arr[i++],arr[j--]);
        
        
    }
    return pivotIndex;
}
void QuickSort(int *arr,int s,int e){

    if(s>=e)
    return;
    int p=pertition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);

}

int main() {
    int arr[]={1,5,2,7,4};
    int n=5;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}