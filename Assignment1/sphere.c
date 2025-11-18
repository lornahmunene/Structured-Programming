#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    area = 4 * PI * radius * radius;

    printf("Surface Area of the Sphere = %.2f\n", area);

    return 0;
}
