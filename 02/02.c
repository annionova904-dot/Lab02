#include <stdio.h>

struct Student {
    char name[20];
    float gpa;
};

int main() {
    // 1 & 2. Создание и заполнение
    struct Student group[5] = {
        {"Ivan", 3.5}, {"Maria", 4.9}, {"Oleg", 4.2}, {"Anna", 4.5}, {"Dmitry", 3.8}
    };

    // 3. Вывод всех
    struct Student max_s = group[0];
    for(int i = 0; i < 5; i++) {
        printf("%s: %.1f\n", group[i].name, group[i].gpa);
        // 4. Поиск студента с макс. баллом
        if(group[i].gpa > max_s.gpa) {
            max_s = group[i];
        }
    }

    printf("\nЛучший студент: %s (%.1f)\n", max_s.name, max_s.gpa);
    return 0;
}