#include<stdio.h>
struct student {
    float age;
} s[12];

int main() {
    int i,count;
    printf("Enter information of student:\n");
    for (i=0; i<12; ++i){
        printf("Enter age: ");
        scanf("%f",&s[i].age);
    }
    printf("Display information:\n\n");
    
    for (i = 0; i < 12; ++i) {
        printf("age: %.1f", s[i].age);
        printf("\n");
    }
    return 0;
}