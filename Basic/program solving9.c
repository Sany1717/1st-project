#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter First number =");
    scanf("%d",&num1);

    printf("Enter second number =");
    scanf("%d",&num2);

    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;

    printf("Nunber1=%d\n",num1);
    printf("Nunber2=%d\n",num2);

}
