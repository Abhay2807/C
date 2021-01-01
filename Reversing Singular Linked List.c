#include<stdio.h>
#include<stdlib.h>
struct node* reverse(struct node *head);

struct node{
int data;
struct node *link;
};
struct node*head=NULL;
struct node*last=NULL;
int main()
{
int count;
head=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=28;
ptr->link=NULL;
head->link=ptr;
last=(struct node*)malloc(sizeof(struct node));
last->data=7;
last->link=NULL;
head->link->link=last;
head=reverse(head);
struct node *ptr1=head;
while(ptr1!=NULL)
{
count++;
ptr1=ptr1->link;
}
printf(" \n Total nodes are %d\n",count);
struct node *ptr2=head;
while(ptr2!=NULL)
{
printf(" %d ",ptr2->data);
ptr2=ptr2->link;}
return(0);
}

struct node* reverse(struct node *head)
{
struct node *next=NULL;
struct node  *previous=NULL;
while(head!=NULL)
{
next=head->link;
head->link=previous;
previous=head;
head=next;
}
head=previous;
return (head);
}
