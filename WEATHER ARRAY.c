#include<stdio.h>
#include<stdlib.h>
#define YEARS 5
#define MONTHS 12
int main()
{
      int rain[YEARS] [MONTHS] ={ {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
int i, j;
float subtotal, total;
subtotal=0.0;
total=0.0;
printf(" Yearly\t\tRainfall\n");
for(i=0; i<YEARS; i++)
{
for(j=0; j<MONTHS; j++)
{
subtotal+=rain[i][j];
}
printf(" rain in %d is: %f\n",i+2011, subtotal);
total+=subtotal;
}
printf(" Yearly average is\t: %.1f\n",total/YEARS);
printf(" Monthly\t\t RAinfall\n");


for(j=0; j<MONTHS; j++)
{
    for(i=0; i<YEARS ;i++)
    {

        subtotal=subtotal+ rain[i][j];
    }
    printf(" rain in %d month is : %f\n",j+1,subtotal);
    total+=subtotal;
}
printf(" Monthly average  rainfall\t\t is: %.1f\n ",total/MONTHS);
return (0);

}




















