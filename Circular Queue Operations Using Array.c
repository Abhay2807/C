#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int queue[SIZE],front=-1,rear=-1;
void enqueue(int value);
int dequeue();
void display();
void main()
{
int choice,num1=0,num2=0;
while(1)
{ printf("            \t\t\t \n                                        MAIN MENU                 \t\t\t\n ");
printf("\n Select a choice from following items");
printf("\n Enter 1 for insertion operation");
printf("\n Enter 2 for deletion operation");
printf("\n Enter 3 for display operation");
printf("\n Enter 4 for exit operation");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{  case 1:
printf("Enter the element you want to insert into  circular queue:");
scanf("%d",&num1);
enqueue(num1);
break;

case 2:
num2=dequeue();
printf("\n %d element is deleted out of  circular queue",num2);
break;

case 3:
display();
break;

case 4:
exit(1);
break;

default:
printf("Invalid choice");
break;
}
}
}
void enqueue(int value)
{  if(( (front==0) && (rear==SIZE-1))  || (front==rear+1))
{
printf("Overflow error i.e. Circular queue is full");
printf("\n Insertion is not possible");
return;
}
else if((front==-1) && (rear==-1))
{ printf("Insertion successful");
front=rear=0;
queue[rear]=value;
return;
}
else if((front!=0) && (rear==SIZE-1))
{
printf("Insertion successful");
rear=0;
queue[rear]=value;
return;
}
rear=rear+1;
queue[rear]=value;
}
int dequeue()
{
int i;
if((front==-1)&&(rear==-1))
{
printf("Underflow error i.e. Circular queue is empty");
printf(" \n Deletion is not possible");
return(-9999);
}
else if((front!=-1) && (front==rear))
{
i=queue[front];
front=-1;
rear=-1;
return(i);
}
else if(front==SIZE-1)
{
i=queue[front];
front=0;
return(i);
}
return(queue[front++]);
}
void display()
{
int i;
if((front==-1)&&(rear==-1))
{
printf("Circular queue is empty");
return;
} printf("Circular queue elements are");
i=front;
while(i!=rear)
{
printf("\n %d",queue[i]);
if(i==SIZE-1)
i=0;
else
i=i+1;
}
printf("\n %d",queue[i]);

}







