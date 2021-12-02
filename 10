#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int suumm(*arr, longg){
    int sum;
    for (int i = 0; i < longg; ++i){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int number;
    int count = 0;
    int long_ = 0;
    printf("Введите число:\n");
    scanf("%d", &number);

    int nub = number;
    while(nub != 0){
        long_++;
        nub = nub/10;
    }

    int array[long_];

    while (number) {
        array[count++] = number % 10;
        number /= 10;
    }

    printf("\nЭлементы числа через пробел:\n%c");
    int c = long_;
    while (c > 0){
        --c;
        printf("%d ", array[c]);

    }
//    printf("\n\nСумма элементов массива:\n%c");
    int enter = suumm(array, long_);
    enter = enter - *array;
    printf("\n%d", enter);
    return 0;
}

