#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "hello";
    int j;

    j = strlen(str) - 1;
    while(j >= 0)
    {
        putchar(str[j]);
        j --;
    
        
    }
    putchar('\n');
    return 0;
    

}