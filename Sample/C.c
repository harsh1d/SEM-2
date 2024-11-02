#include <stdio.h>
#include <stdlib.h>

void dda(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1, dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xincrement = (float)dx / steps;
    float yincrement = (float)dy / steps;

    int i = 0;

    printf("X-Coordinates\tY-Coordinates\n");

    for (i = 0; i <= steps; i++) {
        printf("(%d, %d)\n", x1, y1);
        x1 += xincrement;
        y1 += yincrement;
    }
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    dda(x1, y1, x2, y2);

    return 0;
}
