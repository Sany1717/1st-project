#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any small alphabet:");
    scanf("%c",&ch);

    switch(ch)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
        printf("Vowel");
        break;

    default:
        printf("Consonent");
    }
    return 0;
}
