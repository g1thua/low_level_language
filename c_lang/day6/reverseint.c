#include <stdio.h>
#include <string.h>
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        if(i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
void reverseint (int a[], int n)
{
    int i = 0;
    int j = 0;
    int c = n -1;
    int b[n];

    while(i < n)
    {
        b[i] = a[c];
        i++;
        c--;

    }
    while(j < n)
    {
        printf("%d" ,b[j]);
        printf(", ");
        j++;

    }
    printf("\n");
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    print_array(a, sizeof(a)/sizeof(int));
    reverseint(a, sizeof(a)/sizeof(int));

    return 0;
    

}