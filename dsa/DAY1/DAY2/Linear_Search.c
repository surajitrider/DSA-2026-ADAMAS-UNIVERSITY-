/*write a program to perform linear search in array using pointer*/
#include <stdio.h>
int linear_search(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr);
    int key =30;
    int index = linear_search(arr, size, key);
    if (index != -1) {
        printf("Element %d found at index: %d\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}