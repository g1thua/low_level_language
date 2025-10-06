#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d " ,n);
    if (n>0)
    {
        printf("is a positive number\n");
    }
    else
    {
        printf("is a negative number\n");
    }
    return (0);

}