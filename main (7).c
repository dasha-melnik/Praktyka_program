#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
    return sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() 
{
    float x1, y1, r1, x2, y2, r2;
    float d;

    printf("Введіть координати центру та радіус першого кола (x1, y1, r1): ");
    scanf("%f %f %f", &x1, &y1, &r1);

    printf("Введіть координати центру та радіус другого кола (x2, y2, r2): ");
    scanf("%f %f %f", &x2, &y2, &r2);

    d = distance(x1, y1, x2, y2);

    if (d == 0 && r1 == r2) {
        printf("-1\n");
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return 0;
}
