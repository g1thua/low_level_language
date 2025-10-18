#include <stdio.h>

char * strjoin(char i[], char j[])
{
    int l = 0;
    int k = 0;
    static char joined[100];

    while(i[l] != '\0')
    {
        joined[l] = i[l];
        l++;
    }
    while(j[k] != '\0')
    {
        joined[l] = j[k];
        k++;
        l++;

    }
    joined [l] = '\0';
    return joined;

}

int main(void)
{
    char s1[98] = "hello ";
    char s2[] = "world!\n";
    char *ptr;

    printf("%s\n" ,s1);
    printf("%s" ,s2);
    ptr = strjoin(s1 , s2);
    printf("%s", ptr);

    return 0;
    
}