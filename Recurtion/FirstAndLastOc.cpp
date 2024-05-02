#include<iostream>
using namespace std;

int firstOc(int arr[],int n,int i,int key)
{
    if(i==n)
    return -1;
    if(arr[i]== key)
    return i;
    return firstOc(arr,n,i+1,key);
}
int lastOc(int arr[],int n,int i,int key)
{
    if(i==0)
    return -1;
    if(arr[i]==key)
    return i;
    return lastOc(arr,n,i-1,key);
}
int main()
{
    int arr[]={1,2,3,4,5,6,2,1};
    
    //int n=arr.length();
    cout<<"First Oc: "<<firstOc(arr,8,0,2)<<endl;
    cout<<"Last Oc: "<<lastOc(arr,8,7,2)<<endl;
}