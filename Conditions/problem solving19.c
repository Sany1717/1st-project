#include<stdio.h>
int main()
{
    int age;
    printf("Enter any age's =");
    scanf("%d",&age);

    if(age>=0 && age<=12)
        printf("Kid");
        else if(age>=13 && age<=19)
        printf("Teenager");
        else if(age>=20 && age<=45)
        printf("Adult");
        else if(age>=46 && age<=60)
        printf("Middle age");
        else
        printf("old");

}
