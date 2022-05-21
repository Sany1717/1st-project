#include<stdio.h>
int main()
{
    int counter;
    printf("Odd Numbers Between 1 to100\n");

    for(counter=1; counter<=100; counter++)
    {
       if(counter%2==1)
        {
            printf("%d\n",counter);
        }
    }
}
