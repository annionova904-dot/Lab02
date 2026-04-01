#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // 1 & 2. Объявление и инициализация
    struct Student s1 = {"Alexey", 19, 4.8};

    // 3. Вывод
    printf("Студент: %s, Возраст: %d, Балл: %.2f\n", s1.name, s1.age, s1.gpa);

    // 4. Ввод данных
    struct Student s2;
    printf("\nВведите имя: ");
    scanf("%s", s2.name);
    printf("Введите возраст: ");
    scanf("%d", &s2.age);
    printf("Введите средний балл: ");
    scanf("%f", &s2.gpa);

    printf("Введенный студент: %s, %d лет, балл %.2f\n", s2.name, s2.age, s2.gpa);
    return 0;
}