#include <stdio.h>

int main()
{
    /*for (int i = 0; i < 5; i += 2)
    {
        for (int j)
            ;
        for (int k)
            ;
        printf("\n");
    }
    for (int i = 0; i < 5; i += 2)
    {
        for (int k = 0; k < i; k += 2)
        {
            printf(" ");
        }
        for (int j = 0; j < 5 - i; j++)
            printf("*");
        printf("\n");
    }

	return 0;*/

    //int num = 5;

    //for (int i = 0; i < (num / 2 + 1); i++)
    //{
    //    for (int j = i; j < (num / 2 + 1); j++)
    //    {
    //        printf("0");
    //    }
    //    for (int k = 0; k < (i * 2 + 1); k++)
    //    {
    //        printf("*");
    //    }

    //    printf("\n");
    //}

    //for (int i = (num / 2 + 1) - 1; i > 0; i--)
    //{
    //    for (int j = i; j <= (num / 2 + 1); j++)
    //    {
    //        printf("0");
    //    }
    //    for (int k = 0; k < ((i - 1) * 2) + 1; k++)
    //    {
    //        printf("*");
    //    }

    //    printf("\n");
    //}

    int num = 5;

    for (int i = 0; i < 3; i++) // 3 = num / 2
    {
        for (int j = 0; j < 3 - i; j++) 
        {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++) // 2 = num / 2
    {
        for (int j = 0; j < 2 + i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 3 - i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}