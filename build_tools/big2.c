#include <stdio.h>

void biggest2() {
    int num1 = 12, num2 = 13;

    if (num1 == num2)
        printf("Both are equal\n");
    else if (num1 > num2)
        printf("%d is greater\n", num1);
    else
        printf("%d is greater\n", num2);
}

