#include <stdio.h>
float force(float mass);

int main()
{
float mass;
printf("Enter the vale of mass in kg\n");
scanf("%f" ,&mass);

printf("The value of force is %.3f\n" ,force(mass));

return 0;
}

float force(float mass){

float result = mass * 9.8;

return result;
}
