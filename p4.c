#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 0;
    int num1, num2 = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d %d", &num1, &num2);
        printf("%d\n", num1 + num2);
    }

    return 0;
}