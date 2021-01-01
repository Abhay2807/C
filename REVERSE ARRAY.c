#include<stdio.h>
#define N 5
int main(void)
{
int a[N];
int *p;
printf(" Enter the elements of the matrix a \n:");
for(p=a;p<a+N;p++){
scanf(" %d",p);
}
printf(" Elements of array in reverse order are :");
for(p=a+N-1;p>=a;p--)
printf(" %d",*p);
return (0);
}
