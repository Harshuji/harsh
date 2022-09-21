#include <stdio.h>

int sum(int a ,int b );

int main() 
{
int c;
c= sum(5,7);
printf("the vale of c if %d\n" ,c);
return 0;
}

int sum(int a , int b){
int c;
c = a + b;
return c;
}