#include <stdio.h>
int main()
{
    float grosssalary,basic,da,ta;
    printf("enter the basic salary:");
    scanf("%d",&basic);
    da = (10 * basic) / 100;
    ta = (12 * basic) / 100;
    grosssalary = basic + da + ta;
    printf("\ngross salary: %d",grosssalary);
    return 0;
}