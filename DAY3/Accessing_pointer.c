/*Accessing elements of a particular index using function from an array using pointer*/
#include<stdio.h>
int access_elements(int *arr, int index, int size) {
    printf("Accessing element at index %d: %d\n");
    for(int i=0; i<size; i++) {
        printf("Element %d:%d\n", i, *(arr + i));
            return 0;
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("access_elements function is called with array and size\n");
    for(int i=0; i<size; i++) {
        printf("element %d:%d\n", i, arr[i]);
    }
    printf("\n");
    access_elements(arr,2,size);
        return 0;
    }