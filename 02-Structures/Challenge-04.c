#include <stdio.h>

typedef struct {
    float x, y;
} Point;

int main() {
    Point pt;
    Point* ptr = &pt;
    pt.x = 5;
    pt.y = 10;
    printf("(%.2f, %.2f)", (*ptr).x, (*ptr).y);

    return 0;
}