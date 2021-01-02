#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
int i,j;
int size;
int temp;
int arr[SIZE];
printf("Enter the size of the array arr:");
scanf("%d",&size);
printf(" SELECTION  SORT");
printf("\n Enter the %d elements of array arr in you want to sort:",size);
for(i=0;i<size;i++){
printf("\n arr[%d]=",i);
scanf("%d",&arr[i]);}

for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n Sorted elements of the array arr are:");
for(i=0;i<size;i++)
{
printf("\n arr[%d]=%d",i,arr[i]);

}
return(0);
}
