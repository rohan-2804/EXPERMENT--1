#include <stdio.h>
#include <math.h>

void solveQuadratic(double a, double b, double c) {
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
}

int main() {
    FILE *file = fopen("value4.txt", "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    double a, b, c;
    while (fscanf(file, "%lf %lf %lf", &a, &b, &c) == 3) {
        solveQuadratic(a, b, c);
    }

    fclose(file);
    return 0;
}
