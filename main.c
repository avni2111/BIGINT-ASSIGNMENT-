
#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main()
{
    struct node*num1=input();
    struct node*num2=input();

    struct node*sum=add(num1,num2);

    struct node*difference=subtract(num1,num2);

    struct node*product=multiply(num1,num2);

    struct node*division=divide(num1,num2);

    //printing the result
    printf("number 1:");
    print(num1);

    printf("number 2:");
    print(num2);

    printf("sum:");
    print(sum);

    printf("difference:");
    print(difference);

    printf("product:");
    print(product);

    printf("division:");
    print(division);

    free(num1);
    free(num2);
    free(sum);
    free(difference);
    free(product);
    free(division);
    return 0;
}



}
