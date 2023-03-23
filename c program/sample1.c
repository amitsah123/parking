#include <stdio.h>
int main()
{
    int amount,note1,note2,note5,note10,note50,note100;
    printf("enter the amount");
    scanf("%d", &amount);
    note100 = amount/100;
    printf("print no. note100:%d\n", note100);
    amount=amount%100;
    note50 = note100/50;
    printf("print no. note50:%d\n", note50);
    amount=amount%100;
    note10 = note50/10;
    printf("print no. note5:%d\n" , note10);
    amount=amount%100;
    note5 = note10/5;
    printf("print no note1:%d\n", note5);
    amount=amount%100;
    note1 = note5/1;
    printf("print no. of note1:%d\n", note1);
    return 0; 
}
