#include <stdio.h>
int linearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // int arr[] = {1, 3, 56, 7986, 46, 7654, 543, 23, 876543, 124, 835, 43, 69, 8635, 1345, 4537, 45, 9, 45, 4, 56, 3467};
    // int size = (sizeof(arr) / sizeof(arr[0]));
    // int searchIndex = linearSearch(arr, size, 45);
    // printf("The element is at the index - %d", searchIndex);

    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
}