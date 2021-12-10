#include <stdio.h>
#include <math.h>

int main() {
    float z1;
    float z2;
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);
    z1=(sin(a)+cos(2*b-a))/(cos(a)-sin(2*b-a));
    z2=(1+ sin(2*b))/(cos(2*b));
    printf("\nz1= %f", z1);
    printf("\nz2= %f", z2);
    return 0;
}
