#include <stdio.h>

void int_swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
int main(void)
{
    int a,b;
    a = 98;
    b = 42;

    printf("a = %d \n b = %d \n" ,a ,b );
    int_swap(&a ,&b );
    printf("a = %d \n b = %d \n" ,a ,b );

    return 0;
    
}