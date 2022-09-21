
#include <stdio.h>

int Fibonacci(int x);

int main() {
    int a;
    printf("Enter the number the numberof a\n");
    scanf("%d",&a);

    printf("the value of number is %d ",Fibonacci(a));
    return 0;
}

int Fibonacci(int x) {

    if(x==0) {
        return 0;
    }

    else if(x==1) {
        return 1;
    }

    else {
        return  x +(x-1) + (x-2);
    }

}


