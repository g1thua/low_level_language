#include <stdio.h>
#include <string.h>

int myprint(char str[])

{

    for(int i = 0; str[i] != '\0' ;i++ )
    {
        putchar(str[i]);


    }
    return 0;



}
int main(void)
{
    char info[100] = "my name is gilbert";

    myprint(info);

    return 0;

}