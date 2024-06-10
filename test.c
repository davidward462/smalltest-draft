#include <stdio.h>
#include <stdbool.h>
#include "test.h"

void assert_is_true(bool a)
{
        if (!a) {
                printf("test failed\n");
        }
}

void assert_is_false(bool a)
{
        if (a) {
                printf("test failed\n");
        }
}
