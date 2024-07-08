#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) 
{
    if (x == y) {
        return 0;
    }

    int distance = y - x;
    int steps = 0;
    int current_step_length = 0;

    while (distance > 0) 
    {
        steps++;
        current_step_length++;
        distance -= current_step_length;

        if (distance <= 0) {
            break;
        }

        steps++;
        distance -= current_step_length;

        if (distance <= 0) {
            break;
        }

        steps++;
        distance -= current_step_length;
    }

    return steps;
}

int main() {
    int x, y;

    printf("Введіть початкове число x: ");
    scanf("%d", &x);
    printf("Введіть кінцеве число y: ");
    scanf("%d", &y);

    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків від %d до %d: %d\n", x, y, result);

    return 0;
}
