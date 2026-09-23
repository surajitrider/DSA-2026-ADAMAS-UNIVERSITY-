/*write a program to search for an element in an array using pointer*/
#include <stdio.h>

int linearSearch(int *ptr, int size, int key)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(*(ptr + i) == key)   
            return i;           
    }

    return -1;                  
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key, result;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, size, key);

    if(result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}