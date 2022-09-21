#include <stdio.h>

int main()
{
    int n_student=3;
    int n_subject=4;

    int marks[3][4];
    for(int i=0; i<n_student; i++) {
        for(int j=0; j<n_subject; j++) {
            printf("Enter the marks of %d student in %d subject\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    for(int i=0; i<n_student; i++) {
        for(int j=0; j<n_subject; j++) {
            printf("the marks of %d student in %d subject is:%d\n",i+1,j+1,marks[i][j]);

        }
    }
    return 0;
}