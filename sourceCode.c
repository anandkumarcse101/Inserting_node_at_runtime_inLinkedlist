#include<stdio.h>
#include<stdlib.h>
struct Node
{

    int data;
    struct Node *next;
}*head=NULL;
void insert(struct Node *p,int index, int value)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=value;
    if(index==0)
    {
        t->next=head;
        head=t;
    }
    else
    {    int i;
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}

void display(struct Node *p)
{
while(p!=NULL)
{
    printf("%d\n",p->data);
    p=p->next;
}
}
int main()

{   int n;
    printf("How many Node , Do You want?\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    { 
     int index=i;
     int value;
     printf("Enter the value for  index=%d ",i);
     scanf("%d",&value);
     insert(head,index,value);
    }
   display(head);
   
    return 0;
}
