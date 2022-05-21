#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter any two integer number :");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        printf("Large= %d\n",num1);

   }

    if(num1<num2)
    {
        printf("%d\nlarge",num2);

    }
    else
        printf("equal");






}
