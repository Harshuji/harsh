#include <stdio.h>

int strlen(char *a){
char *ptr = a;
int len = 0;
while(*ptr!='\0'){
  len++;
  ptr++;
}
return len;
}

int main()
{
char a[] = "harsh";

int l = strlen(a);

printf("the length of string is %d" ,l);
}
