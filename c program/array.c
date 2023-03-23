//write a program to sort an array in increasing order
// Online C compiler to run C program online
/*#include <stdio.h>
void swap(int a[],int size);
int main() {
    int size;
        printf("Enter the size of the array : ");
    scanf("%d ",&size);
    int a[size];

    printf("Enter the element of the array :");
    for(int j =0;j<size;j++){
        scanf("%d ",&a[j]);
    }
    swap(a,size);
    return 0;
}
void swap(int a[],int size){
    int c;
    for(int i = 0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for(int k =0;k<size;k++){
        printf("%d\n",a[k]);
    }
}
#include<stdio.h>
int main() {
     int i,j;
     int arr[2][3];
     for(i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
        scanf("%d ",&arr[i][j]);
     }
}*/
int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int i, largest;

   largest = array[0];

   for(i= 1; i < 10; i++) {
      if( largest < array[i] )
         largest = array[i];
   }

   printf("Largest element of array is %d", largest);

   return 0;
}