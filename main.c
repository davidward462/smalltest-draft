#include <stdio.h>
#include <stdbool.h>
#include "test.h"

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

void test_abs_pass(int input_value, int expected_value)
{
        assert_is_true(abs(input_value) == expected_value);
}

void test_abs_fail(int input_value, int expected_value)
{
        assert_is_false(abs(input_value) == expected_value);
}

int main(int argc, char** argv)
{
        test_abs_pass(0, 0);
        test_abs_pass(1, 1);
        test_abs_pass(-1, 1);
        test_abs_fail(-3, -3);
        test_abs_fail(6, -6);

        return 0;
}
