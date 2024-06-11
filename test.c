#include <stdio.h>
#include <stdbool.h>
#include "test.h"
#include "test_lib.h"

// Import user libraries here
#include "foo.h"

// Write unit tests here
void test_abs_pass(int input_value, int expected_value)
{
        assert_is_true(abs(input_value) == expected_value);
}

void test_abs_fail(int input_value, int expected_value)
{
        assert_is_false(abs(input_value) == expected_value);
}

// Run unit tests with specific values
void run_tests()
{
        printf("running tests...\n");

        test_abs_pass(0, 0);
        test_abs_pass(1, 1);
        test_abs_pass(-1, 1);
        test_abs_fail(-3, -3);
        test_abs_fail(6, -6);

        printf("complete.\n");
}

int main()
{
        run_tests();
        return 0;
}


