#include<stdio.h>
int main(){
    char C;

printf("enter letter");
scanf("%C",&C);
switch (C){
    case 'A':
        printf("APPLE");
        break;
        case 'a':
            printf("apple");
            break;
            default:
                printf("kuchh nhi ");

}
return 0;
}