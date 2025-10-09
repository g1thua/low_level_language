#include <stdio.h>

int myupper(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]<='Z' && str[i] >= 'A')
        {
            count ++;
            
        }
       
    }
    return count;

}
int main(void)
{
    char input[100];
    printf("input you sentence \n");
    fgets(input, sizeof(input), stdin);
    printf("total uppercase letters are %d\n" ,myupper(input));
    return 0;


}