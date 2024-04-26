#include<stdio.h>
int Insertion(int a[],int size,int capacity,int element,int index)
{
    if(size>capacity)
    return -1;
    for(int i=size-1;i>index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=element;
    return 1;
}
void deletion(int a[],int size,int capacity,int index)
{
    for(int i=index;i<size;i++)
    {
        a[i]=a[i+1];
    }
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[100]={1,2,32,1213,42,12,435};
    int index,value;
    printf("Enter the index number:\n ");
    scanf("%d",&index);

    printf("Enter the element:\n ");
    scanf("%d",&value);
    int usedSize=7;
    printf("Before Insertion\n");
    display(a,usedSize);
    Insertion(a,usedSize,100,value,index);
    usedSize++;
    printf("\nAfter Insertion\n");
    display(a,usedSize);
    
    deletion(a,usedSize,100,2);
    printf("\nAfter Deletion\n");
    usedSize--;
    display(a,usedSize);

}