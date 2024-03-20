#include<stdio.h>
#include<stdlib.h>
struct CirculerQueue{
int f,r,size;
int *arr;
};

int isFull(struct CirculerQueue * q)
{
    if((q->r+1)%q->size==q->f)
    return 1;
    else 
    return 0;

}
int isEmpty(struct CirculerQueue * q)
{
    if(q->f==q->r)
    return 1;
    else
    return 0;
}

void Enqueue(struct CirculerQueue * q, int val)
{
    if(isFull(q))
    {
        printf("The queue is full");
    }
    else
    {
        printf("Enqueuing value: %d\n", val);
        q->r=(q->r+1)%q->size;
        q->arr[q->r] = val;
    }
}
int Dequeue(struct CirculerQueue * q)
{
int val;
if(isEmpty(q))
{
    printf("The queue is empty");
}
else
{
    q->f=(q->f+1)%q->size;
    val=q->arr[q->f];
}

return val;
}

int main()
{
    struct CirculerQueue q;
    q.size=5;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Enqueue(&q,50);
    for(int i=0;i<q.size-1;i++)
    {
        
        printf("%d",q.arr[i]);
        printf("\n");
    }
    printf("size: %d\n",q.size);
    printf("Dequeueing process: %d\n",Dequeue(&q));
    for(int i=0;i<q.size-1;i++)
    {
        
        printf("%d",q.arr[i]);
        printf("\n");
    }
    printf("size: %d\n",q.size);
    printf("Dequeueing process: %d\n",Dequeue(&q));
    for(int i=0;i<q.size-1;i++)
    {
        
        printf("%d",q.arr[i]);
        printf("\n");
    }
    printf("size: %d",q.size);
}