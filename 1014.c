#include <stdio.h>
 
int main() {
 
    int X;
    double Y, cons;

    scanf("%d %lf", &X, &Y);

    cons = X / Y;

    printf("%.3lf km/l\n", cons);

    return 0;
}