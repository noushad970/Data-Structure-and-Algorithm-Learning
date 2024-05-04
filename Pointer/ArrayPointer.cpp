#include<iostream>
using namespace std;
int getSum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    return sum;
}
int main()
{
    int arr[10]={123,2,3,4,5,6};//only arr[0] value added to the array;
    cout<<arr[0]<<endl;
    cout<<"Address of Array: "<<arr<<endl;
    cout<<"value of 1st Array: "<<*(&arr[0]+1)<<endl;
    cout<<"Address of 2nd Array: "<<&arr[1]<<endl;
    cout<<"2nd array value: "<<arr[1]<<endl;
    cout<<"Array value: "<<2[arr]<<endl;
    int ans=getSum(arr+1,5);
    cout<<"Get Sum answer: "<<ans<<endl;
    //formula:
    //arr[i]=*(arr+i)
    //i[arr]=*(arr+i)

    int temp[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&temp[0];
    cout<<"Size of temp: "<<sizeof(temp)<<endl;
    cout<<"Size of temp ptr: "<<sizeof(ptr)<<endl;
    cout<<"Size of value of temp ptr: "<<sizeof(*ptr)<<endl;
}