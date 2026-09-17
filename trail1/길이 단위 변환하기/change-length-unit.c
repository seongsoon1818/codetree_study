#include <stdio.h>

#define ft2cm 30.48
#define mi2cm 160934

double feat(double origin) {
    return origin * ft2cm;
}

double mile(double origin) {
    return origin * mi2cm;
}

int main() {
    double f = 9.2, m = 1.3;
    printf("%.1lfft = %.1lfcm\n", f, feat(f));
    printf("%.1lfmi = %.1lfcm\n", m, mile(m));
    
    return 0;
}