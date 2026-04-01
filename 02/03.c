#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Person {
    char name[50];
    struct Date birthDate;
};

int main() {
    struct Person p1 = {"Kirill", {12, 5, 2005}};
    struct Person p2 = {"Elena", {30, 8, 1998}};

    struct Person people[2] = {p1, p2};

    for(int i = 0; i < 2; i++) {
        // Вывод тех, кто родился после 2000
        if(people[i].birthDate.year > 2000) {
            printf("%s родился в %d году\n", people[i].name, people[i].birthDate.year);
        }
    }
    return 0;
}