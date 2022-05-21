#include<stdio.h>
int main()
{
    float feet,meters;
    printf("Enter the length in feet =");
    scanf("%f",&feet);

    meters=feet/3.28;

     printf("%.2f Feet = %.2f meters",feet, meters);
}
