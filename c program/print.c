#include <stdio.h>
int main()
{
    float principle, time, rate, SI;
    printf("Enter principle (amount): ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    SI = (principle * time * rate) / 100;
    printf("Simple Interest = %f", SI);

    return 0;
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 28;
    int a = 15;
    int b = 20;
    if (x<y&&a==b)
    printf("x is less than y AND a is equal to b");
    if (x<y || a==b)
    printf("x is less than y OR a is equal to b");
    if(!x)
    printf("x is zero");
    return 0;
}