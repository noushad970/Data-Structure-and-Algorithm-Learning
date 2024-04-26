#include<stdio.h>
#include<stdlib.h>
struct  arrays
{
   long long int fulSize;
   long long int usedSize;
   int *ptr;
};

void createArray(struct arrays *a,long long int fullsize,long long int uSize)
{
    a->fulSize=fullsize;
    a->usedSize=uSize;
    a->ptr=(int *)malloc(uSize*sizeof(int));
}
void ShowArray(struct arrays *a)
{
    for(long long int i=0;i<a->usedSize;i++)
    {
        printf("%d ",a->ptr[i]);
    }
}
void SetValue(struct arrays *a)
{
    for(long long int i=0;i<a->usedSize;i++)
    {
        int n;
        
        scanf("%d",&n);
        a->ptr[i]=n;
    }
}
int main()
{
    struct arrays ar;
    createArray(&ar,1000000000000000,100000000000000);
    //SetValue(&ar);
    ShowArray(&ar);

}