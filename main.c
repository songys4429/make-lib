#include <stdio.h>
#include "mymath.h"

int main() {
    int num1 = 22;
    int num2 = 33;
    int sum = add(num1, num2);
    printf("덧셈 결과: %d\n", sum);
    return 0;
}
