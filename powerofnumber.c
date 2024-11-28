#include <stdio.h>

int main() {
    int base, exp, result = 1;
    scanf("%d %d", &base, &exp);
    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("%d", result);
    return 0;
}
