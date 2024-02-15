#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 15;
    int *ptr1 = &a;
    int *ptr2 = &b;

    swap(ptr1, ptr2);

    printf("The valuse of a and b is %d %d\n", a, b);

    return 0;
}