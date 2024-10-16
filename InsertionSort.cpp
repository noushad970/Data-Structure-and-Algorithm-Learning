#include <iostream>
using namespace std;

int main() {

    int arr[]={1,6,2,6,9,5,1,6,3,7,8,32,64,7};
    for(int i=1;i<14;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            arr[j+1]=arr[j];
            else
            break;
        }
        arr[j+1]=temp;

    }
    for(int i=0;i<14;i++){
        cout<<arr[i]<<" ";
    }

}