
#include <stdio.h>

struct square
{
    int lenght;
};
int First(int lengh)
{
    return lengh*lengh;
}
int Second(int lengh)
{
    return lengh*4;
}

struct mp3
{
    unsigned play : 1;
    unsigned pouse : 1;
    unsigned record : 1;
};

int main() {
    enum day {Monday, Tuesday, Wednesday, Thursday};
    enum day Day;
    Day = Monday;
    printf("День: %d\n\n", Day+1);

    struct square Square = {10};
    int second = Second(Square.lenght);
    int first = First(Square.lenght);
    printf("Периметр: %d\n", second);
    printf("Прощадь: %d\n\n", first);

    union number{
        struct mp3 myMp3;
        int num;
    }reader;
    scanf("%x", &reader.num);
    printf("Если плеер играет, то 1, если нет, то 0: %u\n", reader.myMp3.play);
    printf("Если стоит пауза, то 1, если нет, то 0: %u\n", reader.myMp3.pouse);
    printf("Если идёт запись, то 1, если нет, то 0: %u\n", reader.myMp3.record);
    return 0;
}
