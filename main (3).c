#include <stdio.h>

int main() 
{
    int p;
    printf("Введіть кількість розрядів (p ≤ 30): ");
    scanf("%d", &p);

    if (p < 1 || p > 30) 
    {
        printf("Некоректна кількість розрядів\n");
        return 1;
    }

    unsigned long long dp5[p + 1];
    unsigned long long dp9[p + 1];

    dp5[1] = 1;
    dp9[1] = 1;

    if (p > 1) 
    {
        dp5[2] = 2;
        dp9[2] = 2;
    }

    for (int i = 3; i <= p; i++) 
    {
        dp5[i] = dp5[i-1] + dp9[i-1] - dp5[i-2];
        dp9[i] = dp5[i-1] + dp9[i-1] - dp9[i-2];
    }

    unsigned long long result = dp5[p] + dp9[p];
    printf("Кількість чисел з %d розрядів: %llu\n", p, result);

    return 0;
}
