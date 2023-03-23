/*program to add number using pointer
#include<stdio.h>
int main() {
      int *ptr1,*ptr2;
      int num;
      printf("Enter two numbers: ");
      scanf("%d %d ", ptr1,ptr2);

      num = *ptr1 + *ptr2;
      printf("sum = %d",num);
return 0;
}*/
/*wap to input length in centimeter to convert it to meter and kilometer
#include<stdio.h>
int main() {
    float cm,m,km;
    printf("Enter length in centimeter:");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/10000;
    printf("Length in meter:%.2fm\n",m);
    printf("length in kilometer:%.2fkm\n",km);
    return 0;
}*/
//program to print stars sequence 3
/*#include <stdio.h>

int main() {
    int rows = 3;
    int i, j, space;

    for (i = 1; i <= rows; i++) {
        
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}*/
/*program to print armstrong number between 1 & 1000*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;
    printf("Armstrong numbers from 1 to 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        num = i;
        originalNum = i;
        int digits = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }
        while (num != 0) {
            remainder = num % 10;
            result += pow(remainder, digits);
            num /= 10;
        }
        if (result == i) {
            printf("%d\n", i);
        }
        result = 0;
    }
    return 0;
}