#include <stdio.h>
void display(); //function prototype

int main()
{
int a;
printf("initialisation the dispaly function\n");
display(); //function call
printf("display function finish it work\n");
return 0;
}

//function display 
void display(){
printf("This is display function\n");
}