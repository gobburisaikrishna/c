#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    float s, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c) / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area using Heron's formula: %.2f\n", area);

    return 0;
}
