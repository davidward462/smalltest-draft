#ifndef UNIT_TEST_H
#define UNIT_TEST_H

int abs(int a);

void test_abs_pass(int input_value, int expected_value);

void test_abs_fail(int input_value, int expected_value);

void run_tests();

#endif
