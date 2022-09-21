#include <stdio.h>

void swap (int *a ,int *b);

int main()
{
int a=3,b=4;

printf("the value of a and b is %d and %d \n",a,b);
swap(&a,&b);
printf("the value of a and b is %d and %d \n",a,b);
    
    return 0;
}

void swap (int *a ,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
