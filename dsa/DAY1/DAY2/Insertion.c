/*WRITE A PROGRAM IN C FOR INSERTION USING FUNCTION*/
#include <stdio.h>
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insert_element(int arr[], int* size, int pos, int element) {
    for (int i = *size; i > pos - 1; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos - 1] = element;
    *size = *size + 1;
}
int main(){
    int arr[10]={10,20,30,40};
    int size=4;
    int pos=3;
    int element=25;
    printf("original array: ");
    print_array(arr,size);
    insert_element(arr,&size,pos,element);
    printf("array after insertion: ");
    print_array(arr,size);
    return 0;
}