
#include "hello.h"

#include <stdio.h>

int factorial(int n)
{
    int i;
    int retval = 1;

    for (i = 1; i <= n; i++)
    {
        retval *= i;
    }

    return retval;
}

int main(int argc, char **argv)
{
    greeting("everyone");

    printf("10 factorial is %d\n", factorial(10));
}