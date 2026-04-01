#include <stdio.h>
#include <string.h>

// Определение перечисления для курса
typedef enum {
    FIRST = 1, SECOND, THIRD, FOURTH
} Course;

// Определение структуры Студент
typedef struct {
    char name[50];
    int age;
    Course course;
    float gpa;
} Student;

// --- ФУНКЦИИ ---

// 1. Добавление студента (заполнение данных по указателю)
void addStudent(Student *s, const char *name, int age, Course course, float gpa) {
    strcpy(s->name, name); // Копируем имя в массив структуры
    s->age = age;
    s->course = course;
    s->gpa = gpa;
}

// 2. Вывод списка студентов
void printStudents(Student *arr, int count) {
    printf("\n%-15s | %-8s | %-6s | %-5s\n", "Имя", "Возраст", "Курс", "Балл");
    printf("----------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-15s | %-8d | %-6d | %-5.2f\n", 
                arr[i].name, arr[i].age, arr[i].course, arr[i].gpa);
    }
}

// 3. Поиск студента по имени
void findByName(Student *arr, int count, const char *searchName) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(arr[i].name, searchName) == 0) {
            printf("\n[Результат поиска]: %s найден! Возраст: %d, GPA: %.2f\n", 
                    arr[i].name, arr[i].age, arr[i].gpa);
            found = 1;
        }
    }
    if (!found) printf("\n[Поиск]: Студент с именем %s не найден.\n", searchName);
}

// 4. Сортировка по среднему баллу (алгоритм пузырька)
void sortByGPA(Student *arr, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j].gpa < arr[j + 1].gpa) { // Сортируем от большего к меньшему
                Student temp = arr[j];  // Меняем местами СТРУКТУРЫ целиком
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n(Список отсортирован по среднему баллу)\n");
}

int main() {
    // Создаем массив из 3 студентов
    Student group[3];

    // Добавляем данные
    addStudent(&group[0], "Ivan", 19, FIRST, 4.2);
    addStudent(&group[1], "Maria", 20, SECOND, 4.9);
    addStudent(&group[2], "Oleg", 21, THIRD, 4.5);

    // Выводим список
    printStudents(group, 3);

    // Ищем студента
    findByName(group, 3, "Maria");

    // Сортируем и выводим снова
    sortByGPA(group, 3);
    printStudents(group, 3);

    return 0;
}