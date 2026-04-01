#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

struct SafeUnion {
    enum { TYPE_INT, TYPE_FLOAT, TYPE_CHAR } type;
    union Data value;
};

int main() {
    union Data d;
    d.i = 100;
    printf("Число: %d\n", d.i);
    
    d.f = 2.5; // Теперь i "сломалось", так как память занята float
    printf("Float: %.1f, Int теперь: %d (мусор)\n", d.f, d.i);

    return 0;
}