#include <stdio.h>
#include <math.h>
int main()
{
    int u,t,a,b,c,v,s,T;
    printf("enter the three character");
    scanf("%d\n%d\n%d\n%d\n%d\n", &u,&t,&a,&b,&c);
    v = (u+(a*t));
    s = (u*t)+((a*t*t)/2);
    T = (2*a)+sqrt(b+9*c);
    
    printf("calculate v=%d\n:",v);
    printf("calculate s=%d\n:",s);
    printf("calculate t=%d\n:",t);
    return 0;
}