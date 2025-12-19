#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d", i);
        if (i + 2 <= n)
            printf(" ");
    }
    printf("\n");
    return 0;
}
