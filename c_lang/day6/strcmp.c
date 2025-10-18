#include <stdio.h>

int stricmp (char i[], char j[])
{
    int k = 0;
    int l = 0;
    while(i[k] != '\0' && j[k] != '\0')
    {
        if(i[k] != j[k])
        {
            l = i[k] - j[k];
        
        break;
        }
        k++;
    }
    return l;

}

int main (void)
{
    char s1[] = "Hello";
    char s2[] = "World";

    printf("%d ", stricmp(s1 , s2));
    printf("%d " , stricmp(s2 , s1));
    printf("%d ", stricmp(s1 , s1));

    return 0;
    
}