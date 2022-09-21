#include <stdio.h>

int main()
{
    char ch;
    printf("enter your character\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122) {
        printf("it is lowercase\n");
    }
    else
    {
        printf("it is not lowercase\n ");
    }
    return 0;
}