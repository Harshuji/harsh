#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int multiply(int,int);
int divide(int,int);
void main()
{
  int a,b,o;
  printf("enter values:\n ");
  scanf("%d %d",&a,&b);
  printf("Enter option : ");
  scanf("%d",&o);
  if(o==1)
    add(a,b);
  else if(o==2)
    sub(a,b);
  else if(o==3)
    multiply(a,b);
  else if(o==4)
    divide(a,b);
  else
    printf("Invalid option!\n");
 }
int add(int x,int y)
{
  printf("%d ",x+y);
}
int sub(int x,int y)
{
  printf("%d ",x-y);
}
int multiply (int x,int y)
{
  printf("%d ",x*y);
}
int divide (int x,int y)
{
  printf("%d ",x/y);
}