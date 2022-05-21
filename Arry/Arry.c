#include<stdio.h>
int main()
{
    int num[5],n,i,sum=0;
    printf("How many numbers=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];

    }
    printf("The sum of=%d\n",sum);
    printf("The averge number is=%f\n",(float)sum/n);
}
