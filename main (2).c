#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{ return (a / gcd(a, b)) * b;}

int main() 
{
    int p;

    printf("Введіть кількість чисел (1<; <21)
    scanf("%d", &p);

    if (p < 2 || p > 20) 
    {
        printf("Некоректна кількість чисел\n");
        return 1;
    }

    int numbers[p];

    printf("Введіть %d натуральних чисел через пробіл: ", p);
    for (int i = 0; i < p; i++) 
    { scanf("%d", &numbers[i]);}

    int result = numbers[0];
    for (int i = 1; i < p; i++) 
    { result = lcm(result, numbers[i]);}

    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}

