//wap to check student are passed or failed
/*#include<stdio.h>
int main() {
    int marks;
    printf("enter the marks(0-100)");
    scanf("%d",&marks);
    if(marks >= 0 && marks <= 30){
        printf("fail\n");
    }else if(marks > 30 && marks <= 100){
        printf("pass\n");
    }
else{
    printf("wrong answer");
}
return 0;
}*/
/*#include<stdio.h>
int main() {
    int isMonday=1;
    int isRaining=0;
    printf("%d\n", isMonday && isRaining);
    return 0;
}*/
/*#include<stdio.h>
int main() {
    int x;
    printf("enter number:");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100);    
return 0;
}*/
/*#include<stdio.h>
int main() {
    int age;
    printf("enter age :");
    scanf("%d",&age);
    if (age > 18){
        printf("they can vote\n");
        printf("they can drive\n");
        printf("they can porpose a girl\n");
    }
    else if (age <= 18 && age < 100){
        printf("theyv can not vote\n ");
        printf("they can not drive\n");

    }
    else {
        printf("wrong input");
    }*/
    /*#include<stdio.h>
    int main() {
           int a,b,c;
        printf("enter the value");
        scanf("%d\n %d\n %d",&a,&b,&c);
        if(a < b && a < c){
            printf("a is smaller",a);
        }
        if(b< a && b< c){
            printf("b is smaller",b);
        }
        if(c< b && c < a){
            printf("c is smaller",c);
        }
        
         
         
    return 0;
    }*/
    /*#include<stdio.h>
    int main() {
        addition(); 
    return 0;
    }
    int a,b,c;
    void addition(a,b){
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("sum%i",c);
    }*/
    /*#include<stdio.h>
    int main() {
        int a,b,c;
        scanf("%d%d",&a,&b);
        c=a+b;       
        return c;
    }
    int main(){
        int x=addition();
        printf("%d",x*x);
    }*/
    /*#include <stdio.h>
int main() {
	int pass, x=10;	

	while (x!=0)
	{
	printf("\nInput the password: ");
	scanf("%d",&pass);	
	
	if (pass==123456)
	{
		printf("password matched");
		x=0;
    }
    else
    {
       printf("password doesn't matched");       
	}
	printf("\n");
   }
	return 0;
} */
/*#include<stdio.h>
int checkpassword(int x,int y)
 {
    if(x==y)
    return 1;
    else
    return 0;
 }
 int main() {
    int pwd,cpwd;
    scanf("%d %d",&pwd,&cpwd);
    int x = checkpassword(pwd,cpwd);
    if(x==1)
    printf("password matches");
    else
    printf("password doesn't matched");
 } */
 /*#include<stdio.h>
 #include<ctype.h>
 int main() {
    printf("%d",abs(-123));
    printf("\n%.2f",ceil(3.6));
    printf("\n%.2f",ceil(3.3));
    printf("\n%.2f",floor(3.6));
    printf("\n%.2f",floor(3.3));
    printf("\n%.2f",sqrt(16));
       
      
      
 return 0;
 }

#include <stdio.h>
#include <conio.h>
void main()
{
	int num,res=0;
	clrscr();
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}*/
/*#include<stdio.h>
int main() {
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i = 1; j<= rows; ++i){
        for (j = 1; j <= i; ++j){
            printf("amit");
        }
        printf("\n");
    }
    
return 0;
}*/
/*write a program read from user of all student atleast  12 student save them in array which can save in floating point array*/
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