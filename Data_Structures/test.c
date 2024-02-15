#include <stdio.h>

int main()
{
    printf("Enter a number ");
    int n;
    scanf("%d", &n);

    int arr[2 * n - 1];
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
        arr[(2 * n - 1) - i] = arr[i] + 1;
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("%d", arr[i]);
    }
}