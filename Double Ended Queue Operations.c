#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int queue[SIZE],front=-1,rear=-1;
void insertfront(int value);
int deleterear();
void insertrear(int value);
int deletefront();
void display();
void main()
{
int choice,num1=0,num2=0,num3=0,num4=0;
while(1)
{ printf("            \t\t\t \n                                        MAIN MENU                 \t\t\t\n ");
printf("\n Select a choice from following items");
printf("\n Enter 1 for insertion operation at front");
printf("\n Enter 2 for deletion operation  at front");
printf("\n Enter 3 for insertion operation at rear");
printf("\n Enter 4 for deletion operation  at rear");
printf("\n Enter 5 for display operation");
printf("\n Enter 6 for exit operation");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{  case 1:
printf("Enter the element you want to insert at front of double ended queue:");
scanf("%d",&num1);
insertfront(num1);
break;

case 2:
num2=deletefront();
printf("\n %d element is deleted out of  double ended queue from front",num2);
break;

 case 3:
printf("Enter the element you want to insert at rear of double ended queue:");
scanf("%d",&num3);
insertrear(num3);
break;

case 4:
num4=deleterear();
printf("\n %d element is deleted out of  double ended queue from rear",num4);
break;

case 5:
display();
break;

case 6:
exit(1);
break;

default:
printf("Invalid choice");
break;
}
}
}
void insertfront(int value)
{
if((front==-1)&& (rear==-1))
{ printf("Insertion is successful");
front=rear=0;
queue[front]=value;
return;
}
front=front-1;
queue[front]=value;
}

void insertrear(int value){
if((front==-1)&& (rear==-1))
{ printf("Insertion is successful");
front=rear=0;
queue[rear]=value;
return;
}
 if(rear==SIZE-1)
{
printf("Overflow error i.e. Queue is full");
printf(" \n We cannot insert element in the queue");
return;
}
rear=rear+1;
queue[rear]=value;
}

int deletefront()
{
int i;
if((front==-1) && (rear==-1))
{
printf("Underflow error i.e. Queue is empty");
printf("\n Deletion is not possible");
return(0);
}
 else if((front!=-1) && (front==rear))
{
i=queue[front];
front=-1;
rear=-1;
return (i);
}
return(queue[front++]);
}

int deleterear()
{
int i;
if((front==-1) && (rear==-1))
{
printf("Underflow error i.e. Queue is empty");
printf("\n Deletion is not possible");
return(0);
}
else if((front!=-1) && (front==rear))
{
i=queue[rear];
front=-1;
rear=-1;
return (i);
}
return(queue[rear--]);
}

void display()
{
int i;
if((front==-1) && (rear==-1))
{
printf("Underflow error i.e. Queue is empty");
return;
}
printf(" The elements of double ended queue");
for(i=front;i<=rear;i++)
{
printf(" \n %d",queue[i]);
}

}



