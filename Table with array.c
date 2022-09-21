#include <stdio.h>

int main()
{
    int mul[10];
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for(int i=0; i<10; i++) {
        mul[i] = i*(i+1);
    }

    for(int i=0; i<10; i++) {
        printf("%d×%d=%d\n",x,i+1,x*(i+1));
    }

    return 0;

}



