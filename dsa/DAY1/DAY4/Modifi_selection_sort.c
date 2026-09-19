/*Write a c program to perform modified selection sort*/
#include<stdio.h>
void modifiedSelectionSort(int arr[], int size) {
    for(int step = 0; step < size - 1; step++) {
        int min_idx = step;
        int swapped = 0; 
        int is_sorted = 1;
        for(int i = step + 1; i < size; i++) {
            if(arr[i] < arr[min_idx]) {
                min_idx = i;
            }
        }
           if(min_idx != step) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[step];
            arr[step] = temp;
            swapped = 1;
        }
       printf("Iteration %d: ", step + 1);
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
            printf("\n");
        if(swapped == 0 && is_sorted == 1) {
            break; 
       }
    }   
 }   
 int maain(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int data [size];
    printf("Enter the elements of the array:\n",size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
    modifiedSelectionSort(data, size);
    printf("Sorted Array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
 }

        
        