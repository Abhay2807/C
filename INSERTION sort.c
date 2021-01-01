#include<stdio.h>
#include<stdlib.h>
#define M 7
int main()
{
int a[M];
int i,j,temp;
printf("Enter the elements of array a you want to sort:");
for(i=0;i<M;i++)
{
printf("\n Array a[%d] = ",i);
scanf("%d",&a[i]);
}
printf("\n");
for(i=1;i<M;i++)
{
temp=a[i];
for(j=i-1;j>=0;j--)
{
if(a[j]>temp)
a[j+1]=a[j];
else
break;
}
a[j+1]=temp;
}
printf("\n The sorted elments of array are:");
for(i=0;i<M;i++)
{
printf(" \n a[%d] =%d",i,a[i]);
}
return(0);
}
