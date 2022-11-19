#include <stdio.h>
#include "reverse.h"

int string_length(char* string)
{
int count = 0;
while (string[count] != '\0')
{
        count ++;
}
return count;
}

void reverse_string( char* string )
{
        int length = string_length(string);
        for (int i = 0; i<string_length(string)/2; i++)
        {
                char temp = string[i];
                string[i] = string[length - 1 - i];
                string[length - 1 - i] = temp;
        }
}

