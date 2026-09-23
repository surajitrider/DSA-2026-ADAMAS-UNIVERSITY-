//insertion best
//quick worse
#include<stdio.h>
void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int binary_search(int arr[], int left, int right, int key){
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == key)
            return mid; 
        if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}
void insertion_sort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main(){
    int data[] = {6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(data[0]);
    int key;
    printf("Original array: ");
    insertion_sort(data, size);
    printf("array after sorting: ");
    print_array(data, size);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binary_search(data, 0, size - 1, key);
    if(result != -1){
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}