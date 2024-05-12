#include<stdio.h>
#include<math.h>

double Geron(double a, double b, double c);

double Geron(double a, double b, double c) {
    double p;
    p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double u, v, w;
    double s;

    printf("Enter the sides of the triangle: ");
    scanf("%lf %lf %lf", &u, &v, &w);

    s = Geron(u, v, w);
    printf("Area of the first triangle: %lf\n", s);

    s = Geron(10.3, 8.1, 9.7);
    printf("Area of the second triangle: %lf\n", s);

    s = Geron(u + 10.3, v + w, w * 1.7);
    printf("Area of the third triangle: %lf\n", s);

    return 0;
}
