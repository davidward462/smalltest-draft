#include <stdio.h>
#include <stdbool.h>

// Needs this to use header
#include "unit_test.h"

// Needs this to use assert()
#include "test.h"

// Needs this to test user code
#include "mylib.h"


// Unit tests
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




