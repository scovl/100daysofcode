#include <stdio.h>
#include "tools.h"
#include "utils.h"
#include "math_ops.h"

int main(void) {
    int result = sum(10,20);
    printf("sum result: %d\n", result);

    int factorial_result = factorial(5);
    printf("Factorial result of 5: %d\n",factorial_result);

    return 0;
}
