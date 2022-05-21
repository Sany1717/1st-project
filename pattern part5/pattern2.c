#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        //printing spce
        for(col=1; col<=n-row; col++)
        {
              printf(" ");
        }

            //printing number
        {
            for(col=1; col<=row; col++)

                printf("%c",row+64);
        }

        printf("\n");

    }
}
