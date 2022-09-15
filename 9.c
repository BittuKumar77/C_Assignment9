// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement


#include<stdio.h>
int main(){
    int evenNum;
    printf("Enter evenNumber: ");
    scanf("%d",&evenNum);
    switch(evenNum%2)
    {
        case 0:
            printf("nearest odd number is: %d",evenNum+1);
            break;
        default:
            printf("Not a even number\nTry agian!");
    }
return 0;
}
