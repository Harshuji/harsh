#include <stdio.h>

int main()
{
    int i = 3;
    int *ptr = &i;

    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);

    return 0;
}