#include<stdio.h>

int binarySearch(int a[],int size,int element)
{
    int x=0;
    int low=0,high=size-1,midIndex;
    
    while(low<=high)
    {
        midIndex=low +(-low+high)/2;
        if(a[midIndex]==element)
        {
           return midIndex;
        }
        if(a[midIndex]<element)
        {
            low=midIndex+1;
        }
        else
        {
            high=midIndex-1;
        }
        x++;
        printf(" M: %d, F: %d, L: %d\n",midIndex,low,high);
        
    }
    printf("The number of Operations: %d\n",x);
    return -1;
    
}
int main()
{
    int arr[100]={0,1,2,3,4,5,6,10,21,33,41,44,46,56,66,67,77,88,99};
   
    int ans=binarySearch(arr,19,41);
    printf("The index number is: %d\n",ans);

    
}

