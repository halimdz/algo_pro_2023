#include <stdio.h>

#define P 3.14159265358979323846


int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = P * radius * radius;
    printf("The area of the circle with radius %.2lf is %.2lf.\n", radius, area);

    return 0;
}





