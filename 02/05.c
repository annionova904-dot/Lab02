#include <stdio.h>

enum Day { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

struct Schedule {
    enum Day day;
    char task[50];
};

int main() {
    enum Day today = WED;

    switch(today) {
        case MON: printf("Сегодня понедельник\n"); break;
        case WED: printf("Сегодня среда\n"); break;
        default: printf("Другой день недели\n");
    }
    return 0;
}