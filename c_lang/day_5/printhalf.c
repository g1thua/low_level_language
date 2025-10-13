#include <stdio.h>
#include <string.h>

void puthalf(char *str)
{
    int i, j;

    j = strlen(str) ;
    i = j / 2;
    while(i <= j)
    {
        putchar(str[i]);
        i++;

    }
}
int main(void)
{
    char *str;
    str = "0123456789";
    puthalf(str);
    return 0;
    
}