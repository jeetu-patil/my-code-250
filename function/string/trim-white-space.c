#include <stdio.h>

void leading(char * str);

int main()
{
    char str[100];
    
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming leading whitespace: \n%s", str);

    leading(str);

    printf("\n\nString after trimming leading whitespace: \n%s", str);

    return 0;
}
void leading(char * str)
{
    int index=0, i, j;

    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
        index++;

    if(index != 0)
    {
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0';
    }
}