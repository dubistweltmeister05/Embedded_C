#include <stdio.h>
int main()
{
    int size;
    printf("Enter the Size of the array:- \n");
    scanf("%d", &size);
    int arr[size];
    int *ptr = arr;
    int *ptr1 = arr;
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element to be stored at the %dth index:- ", i);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *ptr1);
        ptr1++;
    }

    return 0;
}