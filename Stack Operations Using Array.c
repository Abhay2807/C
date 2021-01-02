#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int stack[SIZE],top=-1;
void push(int value);
int pop();
void display();
int peek();
void main()
{
int choice,num1=0,num2=0,c;
while(1)
{ printf("\t\t\t \n MAIN MENU");
printf("\n Select a choice from following items");
printf("\n Enter 1 for push operation");
printf("\n Enter 2 for pop operation");
printf("\n Enter 3 for peek operation");
printf("\n Enter 4 for display operation");
printf("\n Enter 5 for size operation");
printf("\n Enter 6 for exit operation");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{  case 1:
printf("Enter the element you want to push into stack:");
scanf("%d",&num1);
push(num1);
break;

case 2:
num2=pop();
printf("\n %d element is deleted out of stack",num2);
break;

case 3:
 c=peek();
 printf("\n %d element is present at the top of stack",c);
 break;

case 4:
display();
break;

case 5:
printf("The size of the stack is %d",top+1);
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

void push(int value)
{
  if(top==SIZE-1)
  {
      printf("Overflow error , so stack is full");
      printf("\n Insertion is not possible");
  }
    else
    {
       stack[++top]=value;
       printf("\n Insertion is successful");
    }

}

int pop()
{
   if(top==-1)
   {
       printf("Underflow Error, So stack is already empty");
       printf("Popping is not possible");
   }
   else{

    return(stack[top--]);

   }
}

int peek()
{
   if(top==-1)
   {
       printf("Underflow Error, So stack is empty");
   }
   else{

    return(stack[top]);
   }
}

void display()
{
  if(top==-1)
   {
       printf("Underflow Error, So stack is empty");
   }
   else{
    int i;
    printf("Stack elements are");
    for(i=top;i>=0;i--)
    {
      printf("\t \n %d",stack[i]);
    }

   }
}

