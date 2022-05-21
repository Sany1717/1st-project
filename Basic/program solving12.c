#include<stdio.h>
int main()
{
    int r,temp,num,sum=0;
    printf("Enter any five intger number :");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }

    printf("Reverse of number=%d",sum);
}
