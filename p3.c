#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf(" %d", &n);
    float w = 0;
    for (int i = 0; i < n; i++)
    {
        scanf(" %f", &w);
        float area;
        area = w * w;
        area = (int)(area * 10 + 0.5) / 10.0f;
        printf("%.1f\n", area);
    }

    return 0;
}