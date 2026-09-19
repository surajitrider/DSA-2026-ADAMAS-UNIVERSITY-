/*write a programme to traverse elements in an array using pointers*/
#include <stdio.h>

void traverseArray(int *ptr, int size)
{
    int i;
    printf("Elements in the array are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    traverseArray(arr, size);

    return 0;
}