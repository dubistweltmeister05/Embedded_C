#include <stdio.h>
#define size 10
int main()
{
    int ary[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr_low = ary, *ptr_high = ary + (size - 1);
    int swap;

    while (ptr_low < ptr_high)
    {
        swap = *ptr_low;
        *ptr_low = *ptr_high;
        *ptr_high = swap;
        ptr_low++,
            ptr_high--;
    }

    ptr_low = ary;
    printf("\nReverse: \n");
    for (int i = 0; ptr_low < &ary[size];)
        printf("%d ", *ptr_low++);
}