/*wap to check leap year using logical opertor*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year to check:");
    scanf("%d",&year);
    if (((year % 100 != 0) ||( year % 4 == 0)) &&( year % 400 == 0))
    printf("year is leap year");
    else
    printf("not leap year");   
}