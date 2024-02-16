#include <stdio.h>

void changenum(int *a)
{
    *a = 30;
}
int main()
{
    int x = 0;
    changenum(&x);
    printf("%d", x);
}