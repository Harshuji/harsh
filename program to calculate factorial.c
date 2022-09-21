#include <stdio.h>

int main()
{
    int i=0,n,factorial=1;
    printf("Enter the vale of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++ ) {
        factorial*=i;
    }
    printf("the value of %d is %d \n",n,factorial);

}