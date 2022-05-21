#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area,pi=3.1416;
    printf("Enter Radius number= ");
    scanf("%f",&radius);

    area=pi*radius*radius;

    printf("The area of a circle=%f\n",area);
}
