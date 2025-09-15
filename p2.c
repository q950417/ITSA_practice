#include <stdio.h>
#include <stdlib.h>

int main()
{

    int up_base, down_base, height = 0;
    scanf(" %d %d %d", &up_base, &down_base, &height);
    float area = 0;
    area = (float)(((up_base * height) / 2.0f) + ((down_base * height) / 2.0f));
    printf("Trapezoid area:%.1f", area);

    return 0;
}