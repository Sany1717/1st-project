#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        //printing capital letter
        for(col=1; col<=row; col++)
        {
            printf("%c",row+96);
        }


        printf("\n");
    }
}
