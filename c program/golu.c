#include <stdio.h>
int main()
{
    int x,y;
printf("enter two number");
scanf("%d %d" ,&x,&y);
if (x==y)
printf("both number is same");
if (x<y)
printf("y is greater than x");
if (x>y)
printf("x is greater than y");
return 0;
}