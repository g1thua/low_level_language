#include <stdio.h>

int string_len(char a[])
{
    int count , i;
    i = 0;
    count = 0;

    while(a[i] != '\0')
    {
        count ++;
        i ++;

    }
    return count;

}
int main(void)
{
    char str[100];
    int length;
    printf("input your string :\n");
    fgets(str, sizeof str,stdin);
    //fgets prints a new line character thus increases the string count by one//

    length = string_len(str) - 1;
    printf("the string length is %d \n" ,length);

    return 0;

}