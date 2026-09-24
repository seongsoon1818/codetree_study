#include <stdio.h>

double ft2cm(double a) {
    return a * 30.48;
}

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.1lf", ft2cm(a));
    return 0;
}