#include <stdio.h>

int main()
{
    int i=5;
    int *j;
    int **k;

    j = &i;
    k = &j;

    printf("the value of i is %d\n",**k);

    return 0;

}
