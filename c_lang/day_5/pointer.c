#include <stdio.h>

void pointer_reset(int *n)
{
    *n = 98;

}
int main(void)
{
    int n;
    n = 400;
    printf("n = %d \n" ,n);
pointer_reset(&n);
printf("n = %d \n" ,n);
return 0;


}