#include<stdio.h>
int main() {
    int r,n,rev=0,i,count=0;
    printf("Enter num= ");
    scanf("%d",&n);
    for(i=n; n != 0; n=n/10)
    {
        r=n%10;
        rev=10*rev + r;
        count++;
    }
    printf("Reverse of no.=%d\n number of digits=%d",rev,count);


return 0;
}