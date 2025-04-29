//6 variant
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static void compute(const float* a, const float* b, float* result) {
    *result = ((*b - *a) * (*b + *a));
}

void main() {
    float a = 0.0;
    float b = 0.0;
    float result = 0.0;
    printf("%s", "insert a and b: ");
    scanf_s("%f%f", &a, &b);
    compute(&a, &b, &result);
    printf("%.5f", result);
}