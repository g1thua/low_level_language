#include <stdio.h>

char * toup (char a[])
{
    int i;
    i = 0;
    static char b[100];

    while(a[i] != '\0')
    {
        if(a[i] > 'Z')
        {
            b[i] = a[i] - 32;

        }
        else
        {
            b[i] = a[i];
            
        }   
    i++;
    
    }
    return b;

}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = toup(str);
    printf("%s"  , ptr);
    printf("%s" ,str);

    return 0;
    
}