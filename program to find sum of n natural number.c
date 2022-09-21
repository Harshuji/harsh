#include <stdio.h>

int main() {

    int i,sum=0;
    int n;
    printf("Enter the vale of n\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        sum +=i;
    }
    printf("the sum of number is %d \n",sum);

}



