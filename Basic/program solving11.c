#include<stdio.h>
int main()
{
    float basic_salary,rent_allowance,medical_allowance,tachnical_allowance,gross_salary;

    printf("Enter basic salary =");

    scanf("%f",&basic_salary);

    rent_allowance=0.3*basic_salary;
    medical_allowance=0.05*basic_salary;
    tachnical_allowance=1000;

    gross_salary=basic_salary+rent_allowance+medical_allowance+tachnical_allowance;

    printf("\n Basic salary=%.2f",basic_salary);
    printf("\n Rent allowance=%.2f",rent_allowance);
    printf("\n Medical allowance=%.2f",medical_allowance);
    printf("\n Tachnical allowance=%.2f",tachnical_allowance);
    printf("\n\n Gross salary=%.2f",gross_salary);

    getch();
    return 0;

}
