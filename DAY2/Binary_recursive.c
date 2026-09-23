/*write a program for performing binary search using function recursive*/
#include <stdio.h>
int binary_search_recursive(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; // Element not found
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key) {
        return mid; // Element found
    } else if (arr[mid] < key) {
        return binary_search_recursive(arr, mid + 1, high, key);
    } else {
        return binary_search_recursive(arr, low, mid - 1, key);
    }
} int main(){
    int add[5]={1,2,3,4,5};
    int size=5;
    int key=3;
    int result=binary_search_recursive(add,0,size-1,key);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;   
}