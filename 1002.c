#include <stdio.h>
 
int main() {

    double A, Raio, pi = 3.14159;

    scanf("%lf", &Raio);

    A = pi * (Raio * Raio);
 
    printf("A=%.4lf\n", A);

    return 0;
}