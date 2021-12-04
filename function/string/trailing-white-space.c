#include<stdio.h>
#include<string.h>


void trailing(char * str)
{
    int index, i=0;
    index = -1;
   
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }

        i++;
    }
    str[index + 1] = '\0';
}

int main()
{
    char str[100];
    
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming trailing white space: \n'%s'", str);

    trailing(str);

    printf("\n\nString after trimming trailing white spaces: \n'%s'", str);

    return 0;
}
