#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    float num1 =0, num2 =0, result =0;
    char iteration = 'Y';
    int operation = 0;
    printf("Operations you can do:-\n");
    //Printing List of Operations
    printf("1.For multiplications\n2.For addition\n3.For subtraction\n4.For division\n5.For power functions\n");
    //Taking 1st number for calculation
    printf("Enter 1st number for operation: ");
    scanf("%f",&num1);
    printf("\n");
    while( iteration =='Y' ){
       printf("Enter option number operation you want to perform: ");
       scanf("%d",&operation);
       printf("\n");
       printf("Enter another number for operation: ");
       scanf("%f",&num2);
       printf("\n");
       if(operation == 1){
        result = num1 * num2;
       }
       else if(operation == 2){
        result = num1 + num2;
       }
       else if(operation == 3){
        result = num1 - num2;
       }
       else if(operation == 4){
        result = num1 / num2;
       }
       else if(operation ==3){
        result = pow(num1,num2);
       }
       printf("Do you want to continue?(Y/N) ");
       fflush(stdin);
       scanf("%c", &iteration);
       printf("\n");
       if(iteration == 'Y'){
        num1 = result;
       }
    }
    printf("Your final result is: %f",result);
    return 0;
}
