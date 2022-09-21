#include <stdio.h>
void printadd(int i){
printf("the address of i is %u\n" ,&i);
}
int main()
{
int i=4;
printf("the value of i is %d\n" ,i);
printadd(i);
printf("the address of i is %u\n" ,&i);

return 0;
}
