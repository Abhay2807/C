#include<stdio.h>
#include<stdlib.h>
#define M 7
int main()
{
int a[M];
int i,found,ind,element_no,k;
int compar=0;
found=0;
printf("Enter the elements of array a:");
for(i=0;i<M;i++)
{
printf("\n Array a[%d] = ",i);
scanf("%d",&a[i]);
}
printf("\n");
printf("Enter the element you want to search:");
scanf("%d",&k);
for(i=0;i<M;i++){
++compar;
if(a[i]==k)
{
found=1;
ind=i;
element_no=i+1;
break;
}

}
if(found==1)
{ printf("\n Total %d comparisons are done \n",compar);
printf("Element %d is founded at index location %d in array a and it is the element no. %d  of array a[%d]",k,ind,element_no,M);
}
else{ printf("\n Total %d comparisons are done \n",compar);
printf("Element %d is not founded in array a[%d]",k,M);
}

return(0);
}
