#include <stdio.h>
int main()
{
    float amount;
    printf("enter the amount of basic salary:", amount);
    scanf("%f", &amount);
     if(amount<=10000){
       float newsalary=amount+(amount*80/100)+(amount*20/100);
       printf("%.2f",newsalary);
     }
     else if(amount>10001 && amount<20000){
         float newsalary=amount+(amount*90/100)+(amount*25/100);
          printf("%.2f",newsalary);
     }
     else if(amount>20000){
         float newsalary=amount+(amount*95/100)+(amount*30/100);
          printf("%.2f",newsalary);
     }

    return 0;
}