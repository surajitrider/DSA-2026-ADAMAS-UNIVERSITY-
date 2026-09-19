#include<stdio.h>
void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
int main(){
    int arr[] = {6,4,7,8,1,9,5,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    display(arr, size);
    bubblesort(arr, size);
    printf("Array after bubble sort: ");
    display(arr, size);
    quicksort(arr, 0, size - 1);
    printf("Array after quick sort: ");
    display(arr, size);
    return 0;
}