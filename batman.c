#include <stdio.h>
#include "prog1.h"
#include <string.h>

int main(int argc, string argv[])
{
    printf("%d\n", argc);
    puts("---");
    //string s = "Hello";
    for (int i = 1; i < argc; i++)
    {
        puts(argv[i]);
    }

    return 0;
}