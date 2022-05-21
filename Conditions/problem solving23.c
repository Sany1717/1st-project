#include<stdio.h>
int main()
{
    float basic,gross,hra,ma;
    printf("Enter basic salary=");
    scanf("%f",&basic);

    if(basic>=10000)
    {
        hra=basic*0.2;
        ma=basic*0.5;
    }
    else if(basic<=30000)
    {
        hra=basic*0.3;
        ma=basic*0.55;
    }
    else
    {
        hra=basic*0.35;
        ma=basic*0.6;
    }

    gross=basic+hra+ma;

    printf("Gross salary of employer=%.2f",gross);

    return 0;
}
