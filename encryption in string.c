#include <stdio.h>
void encrypt(char *c){
char *ptr = c;
while(*ptr!='\0'){
*ptr = *ptr+1;
ptr++;
   }
}
int main()
{
char c[] ="Harsh";
encrypt (c);
printf("encrypt message is %s" ,c);

}