#include <stdio.h>

void increasing(int *ages)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (*(ages + j + 1) < *(ages + j))
            {
                int temp = *(ages + j);

                *(ages + j) = *(ages + j + 1);
                *(ages + j + 1) = temp;
            }
        }
    }
}

void decreasing(int *ages)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (*(ages + j + 1) > *(ages + j))
            {
                int temp = *(ages + j);

                *(ages + j) = *(ages + j + 1);
                *(ages + j + 1) = temp;
            }
        }
    }
}

void print_arr(int ages[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", ages[i]);
    }

    printf("\n");
}

int main()
{
    int ages[10] = {25, 8, 67, 42, 91, 19, 53, 76, 34, 12};

    printf("Ordem original\n");
    print_arr(ages);

    printf("Ordem crescente\n");

    increasing(ages);
    print_arr(ages);

    printf("Ordem decrescente\n");

    decreasing(ages);
    print_arr(ages);

    return 0;
}
