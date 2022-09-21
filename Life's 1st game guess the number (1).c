//Generate a random number between 1 to 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100+1;
    //printf("the number is %d\n",number);

    do {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);

        if(guess>number) {
            printf("Lower number please!\n");
        }

        else if(guess<number) {
            printf("Higher number please!\n");
        }

        else {
            printf("you guess it in %d attempt\n",nguess);
        }

        nguess++;

    } while(guess!=number);


    return 0;
}