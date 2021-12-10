#include<stdio.h>
#include <string.h>

int main(void ) {
    int n,p;
    n = 3;
    p = 0;
    char str1[10] = "123456";
    char str2[10] = "1278";

    strncat (str1, str2 ,n);
    printf ("2) Сложение первой строки и n начальных символов второй: %s\n\n", str1);


    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i]) p++;
    }
        if (p == 0)  printf("4) Совпадает\n\n");
        else printf("4) Не совпадает\n\n");


    char str3[10] = "123456";
    char str4[10] = "1278";

    strncat (str4, str3 ,n);
    printf ("6) Копирование первых n символов одной строки в другую строку: %s\n\n", str4);


    char str5[10] = "02468";
    char f[2] = "6";
    printf("8) Индекс вхождения элемента 6: %ld\n\n", strstr(str5, f) - str5 + 1);


    char str6[10] = "123456789";
    char centre[2] = "5";
    int h = strstr(str6, centre) - str6 + 1;
    printf("13)\nЧасть перед разделителем: ");
    for (int j = 0; j < h; j++){
        printf("%d ", &str6[j] - str6);
    }
    
    printf("\nЧасть после разделителя: ");
    for (int j = h+1; j < 10; j++) {
        printf("%d ", &str6[j] - str6);
    }

    return 0;

}
