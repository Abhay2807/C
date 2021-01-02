#include<stdio.h>
#include<stdlib.h>
struct node* addbeg(struct node *head,int data);
struct node* addend(struct node *ptr,int data);

struct node{
int data;
struct node *link;
};

int main()
{
int count;
struct node *head;
head=(struct node*)malloc(sizeof(struct node));
head->data=2;
head->link=NULL;
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=3;
ptr->link=NULL;
head->link=ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=4;
ptr->link=NULL;
head->link->link=ptr;
ptr=addend(ptr,6);
head=addbeg(head,1);
int value=5,position=5;
addpos(head,value,position);

struct node *ptr1=head;
while(ptr1!=NULL)
{
count++;
ptr1=ptr1->link;
}
printf("Total nodes are %d",count);
struct node *ptr2=head;
while(ptr2!=NULL)
{
printf(" %d ",ptr2->data);
ptr2=ptr2->link;}
return(0);
}

struct node* addend(struct node *ptr,int data)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
ptr->link=temp;
return temp;
}


struct node* addbeg(struct node *head,int data)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
temp->link=head;
head=temp;
return head;
}

void addpos(struct node *head,int value,int pos)
{
struct node *ptr=head;
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=value;
temp->link=NULL;
while(pos!=2)
{
ptr=ptr->link;
pos--;}
temp->link=ptr->link;
ptr->link=temp;
}




