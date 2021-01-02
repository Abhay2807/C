#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
int i=0;
int last,n,num;
int middle;
int first;
int arr[SIZE];
printf("Enter the size of the array arr:");
scanf("%d",&n);
printf("Enter the %d elements of array arr in Ascending Order:",n);
for(i=0;i<n;i++){
printf("\n arr[%d]=",i);
scanf("%d",&arr[i]);}
printf("Enter the number you want to search in the array arr:");
scanf("%d",&num);
first=0;
last=n-1;
while(first<=last)
{
middle=(first+last)/2;
   if(arr[middle]<num)
  {
      first=middle+1;

  }
  else if(arr[middle]==num)
 {
     printf("Element %d is present at index location %d in array arr",num,middle);
     break;
 }
   else
{
    last=middle-1;}

   if(first>last)
  {


      printf("Element not found in the list");}
}
  return(0);

}






