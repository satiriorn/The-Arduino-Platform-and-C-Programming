 /**
  * @file fibonacci_series.c
  * @brief The implementation file of second week of The Arduino Platform and C Programming
  *
  * This file includes implementations fibonacci series to 6 size
  *
  * @author Denys Astapieiev
  * @date 16.09.2022
  *
  */

#include <stdio.h>

int main()
{

    int x = 0, y = 1, f_num = 0;
    printf("Fibonacci series: ");
    printf("%d %d ", x, y);

    for (int i = 0; i < 4; i++)
    {
        f_num = x + y;
        x = y;
        y = f_num;
        printf("%d ", f_num);
    }
}