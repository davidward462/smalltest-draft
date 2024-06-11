#include <stdio.h>
#include "foo.h"

void message(char* s)
{
        printf("%s\n", s);
}

// Random function for testing
int abs(int a)
{
        int result;
        if (a < 0) {
                result = a * -1;
        }
        else {
                result = a;
        }
        return result;
}
