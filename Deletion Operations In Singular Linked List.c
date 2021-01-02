#include<stdio.h>
#include<stdlib.h>
struct node* del_end(struct node *head);
struct node* delfirst(struct node *head);
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
ptr->data=28;
ptr->link=NULL;
head->link->link=ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=4;
ptr->link=NULL;
head->link->link->link=ptr;


  int position=2;
 del_pos(&head,position);
 head=del_end(head);
 head=delfirst(head);

struct node *ptr1=head;
while(ptr1!=NULL)
{
count++;
ptr1=ptr1->link;
}
printf("Total nodes are %d\n",count);
struct node *ptr2=head;
while(ptr2!=NULL)
{
printf(" %d ",ptr2->data);
ptr2=ptr2->link;}

return(0);
}


struct node* del_end(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is already empty");
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else{
        struct node *temp=head;
        struct node *temp2=head;
        while(temp->link!=NULL)
        {  temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
return(head);}
struct node* delfirst(struct node *head)
{
if(head==NULL)
{
printf("linked list is already empty");
}
else{
struct node *temp=head;
head=head->link;
free(temp);
temp=NULL;}
return (head);

}

void del_pos(struct node **head,int position)
{ struct node *previous=*head;
struct node *current=*head;
if(*head==NULL)
{
printf("Linked list is empty");
}
else if(position==1)
{
*head=current->link;
free(current);
current=NULL;
}
else
{
while(position !=1)
{
previous=current;
current=current->link;
position--;
}
previous->link=current->link;
free(current);
current=NULL;}
}

