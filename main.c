#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main() {

    float *p;
    float arr[4] = {56.4, 36.5, 7.7, 44.3};
    float *pa;
    pa = &arr[0];

    for (int a = 0; a < 4; a++) {

        printf("%f\n", (*(pa + a)));
    }

//    void* malloc(20);

//    p = (float *)malloc(4 * sizeof(int));
    p = (float *)malloc(4);
    for (int i = 0; i<4; i++){
        p[i] = arr[i];
    }

    for (int i = 0; i<4; i++)
        printf("%f ", p[i]);
    free(p);

    return 0;
}
