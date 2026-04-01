#include <stdio.h>

struct Rectangle {
    float width, height;
};

// 1. По значению
float calculateArea(struct Rectangle r) {
    return r.width * r.height;
}

// 2. По указателю
float calculatePerimeter(struct Rectangle *r) {
    return 2 * (r->width + r->height);
}

int main() {
    struct Rectangle rect = {10.5, 5.0};
    printf("Площадь: %.2f\n", calculateArea(rect));
    printf("Периметр: %.2f\n", calculatePerimeter(&rect));
    return 0;
}