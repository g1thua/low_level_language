#include <stdio.h>
int main(void)
{
    char line[] = "programming is like building a multilingual puzzle";
    int i = 0;

    while (line[i] != '\0')
    {
        putchar(line[i]);
        i++;

    }

    putchar('\n');

    return 0;

}



