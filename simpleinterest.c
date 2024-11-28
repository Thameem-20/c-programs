#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    scanf("%f %f %f", &principal, &rate, &time);
    interest = (principal * rate * time) / 100;
    printf("%.2f", interest);
    return 0;
}
