#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc > 2)
    {
        puts("Hiba csak egy érték adható meg!");
        exit(1);
    }

    if (argc == 1)
    {
        printf("Hello world\n");
    }
    else
    {
        string name = argv[1];
        if (strcmp(name, "Batman") == 0 || strcmp(name, "Robin") == 0)
        {
            printf("Denevérveszély\n");    
        }
        else
        {
            printf("Hello %s\n", name);
        }
    }

    return 0;
}