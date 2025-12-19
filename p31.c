#include <stdio.h>

int main(void)
{
    int type;
    scanf("%d", &type);

    int h = 5; 

    if (type == 1)
    { 
        for (int i = 1; i <= h; i++)
        {
            for (int s = 0; s < h - i; s++)
                printf(" ");
            if (i == 1)
            {
                printf("*\n");
            }
            else if (i == h)
            {
                for (int k = 0; k < 2 * h - 1; k++)
                    printf("*");
                printf("\n");
            }
            else
            {
                printf("*");
                for (int k = 0; k < 2 * i - 3; k++)
                    printf(" ");
                printf("*\n");
            }
        }
    }
    else if (type == 2)
    { 
        for (int i = 1; i <= h; i++)
        {
            for (int s = 0; s < h - i; s++)
                printf(" ");
            for (int k = 0; k < 2 * i - 1; k++)
                printf("*");
            printf("\n");
        }
    }
    else if (type == 3)
    { 
        for (int i = h; i >= 1; i--)
        {
            for (int s = 0; s < h - i; s++)
                printf(" ");
            for (int k = 0; k < 2 * i - 1; k++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
