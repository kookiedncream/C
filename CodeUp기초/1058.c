#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf(num1 ? "0" : (num2 ? "0" : "1"));

    return 0;
}

