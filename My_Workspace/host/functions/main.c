#include <stdio.h>

int functions(int a, int b, int c);
int main()

{
    functions(12, 13, 14);
    return 0;
}

int functions(int a, int b, int c)
{
    printf("%d\n", a + b + c);
}