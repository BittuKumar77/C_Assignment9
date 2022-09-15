// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement

#include<stdio.h>
int main(){
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   switch(num<0)
   {
       case 1:
          printf("Convert: Negative to Positive:  %d",num*-1);
          break;
       default:
          printf("Convert: Positive to Negative:  %d",num*-1);
   }
return 0;
}
