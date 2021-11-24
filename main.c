#include <stdio.h>

int main(void) {
    int i;
    scanf("%d", &i);

    char *arr[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    printf("Цифра, преобразованная в строку: %s\n\n", arr[i-1]);

    int j;
    int a = 0;
    int d = 2;
    scanf("%d", &j);
    printf("Последовательность простых чисел: 2 ");
    for (int c = 0; c < j-2; c++){
        d++;
        for (int p = 2; p < d; p++){
            if (d % p == 0) break;
            else if (d == p+1) printf(" %d ", d);

        }


    }
    return 0;
}
