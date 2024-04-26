#include<stdio.h>
#include<stdlib.h>
struct  arrays
{
    int fulSize;
    int usedSize;
    int *ptr;
};

void createArray(struct arrays *a,int fullsize,int uSize)
{
    a->fulSize=fullsize;
    a->usedSize=uSize;
    a->ptr=(int *)malloc(uSize*sizeof(int));
}
void ShowArray(struct arrays *a)
{
    for(int i=0;i<a->usedSize;i++)
    {
        printf("%d ",a->ptr[i]);
    }
}
void SetValue(struct arrays *a)
{
    for(int i=0;i<a->usedSize;i++)
    {
        int n;
        
        scanf("%d",&n);
        a->ptr[i]=n;
    }
}
int main()
{
    struct arrays ar;
    createArray(&ar,100,10);
    SetValue(&ar);
    ShowArray(&ar);

}