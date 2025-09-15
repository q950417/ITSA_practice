#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, base = 0;
    scanf(" %d %d", &height, &base);
    printf("Triangle area:%.1f", (height * base) / 2.0f);

    return 0;
}
