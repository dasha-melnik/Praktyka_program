#include <stdio.h>
#include <string.h>

#define MAX_LEN 14

unsigned long long factorial(int n) 
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() 
{
    char word[MAX_LEN + 1];
    unsigned long long result;
    int length;
    int count[256] = {0};

    printf("Введіть слово: ");
    scanf("%s", word);

    length = strlen(word);

    for (int i = 0; i < length; i++) {
        count[(int)word[i]]++;
    }

    result = factorial(length);
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] > 1) {
            result /= factorial(count[i]);
        }
    }

    printf("Кількість анаграм: %llu\n", result);

    return 0;
}
