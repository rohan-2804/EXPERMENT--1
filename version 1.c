#include <stdio.h>
#include <math.h>

int main() {
    double a = 1.0, b = -5.0, c = 6.0;  // Hard-coded coefficients
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Root: %.2lf\n", root);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}
