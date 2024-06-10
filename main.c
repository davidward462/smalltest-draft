#include <stdio.h>
#include <stdbool.h>

#include "test.h"
#include "unit_test.h"
#include "mylib.h"

int main(int argc, char** argv)
{
        // This would be body of program
        message("Begin program.");

        // Testing
        run_tests();
        return 0;
}
