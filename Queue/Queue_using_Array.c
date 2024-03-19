#include <stdio.h>
#include<stdlib.h>
struct queue{
int size;
int r,f;
int* arr;
};
int isFull(struct queue* q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else
    return 0;
}
int isEmpty(struct queue* q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    else
    return 0;
}
void enqueue(struct queue* q,int val)
{
    
    if(isFull(q))
    {
        printf("The queue is full\n");
    }
    else{
       q->r++;
       q->arr[q->r]=val;
    }
}

int main()
{
    struct queue q;
    q.size=3;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    for(int i=0;i<q.size;i++)
    {
        printf("%d",q.arr[i]);
        printf("\n");
    }
    printf("index: %d",q.r);
}