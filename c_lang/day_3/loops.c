#include <stdio.h>

int main(void)
{

    

    for (int i = 0; i<10 ;i++)
    {
        char alpha = 'a';
        while (alpha <='z')
        {
            putchar(alpha);
            alpha++;

        }
        putchar('\n');

    }
    return 0;

}