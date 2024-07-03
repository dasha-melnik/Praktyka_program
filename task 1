#include <stdio.h>

int main() {
    float t1, t2, t3;

    printf("Введіть три натуральних числа через пробіл, що представляють час (в годинах), за який кожен гість може з'їсти пиріг.\n");
    scanf("%f %f %f", &t1, &t2, &t3);

    float total_rate = (1.0f / t1) + (1.0f / t2) + (1.0f / t3);
    float time_needed = 1.0f / total_rate;

    printf("Час, необхідний для з'їдання одного пирога трьома гостями: %.2f години\n", time_needed);

    return 0;
}
