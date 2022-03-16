#include <stdio.h>
#include "prog1.h"
#include <string.h>

#define SIZE 26 

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE; i++)
    {
        tomb[i]='a'+i;
    }
}

int main()
{
    char abc[SIZE];
    feltolt(abc);
    for (int i = 0; i < SIZE; i++)
    {
        putchar(abc[i]);
        putchar(' ');
    }
    puts("");
    return 0;
} 