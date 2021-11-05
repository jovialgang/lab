#include <stdio.h>

int main() {
    char arr[] = {"понедельник","вторник","среда","четверг","пятница","суббота","воскресенье"};

    enum week
    {
        пн = 0,
        вт,
        ср,
        чт,
        пт,
        сб,
        вс
    };

    enum week day;
    day = пн;
    printf("%s",&arr[day]);

return 0;

}
