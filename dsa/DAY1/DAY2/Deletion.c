/*write a c program for deletion using functions*/
#include <stdio.h>
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void delete_element(int arr[],int*size,int pos){
    int idex=pos-1;
    for(int i=idex;i<*size-1;i++){
        arr[i]=arr[i+1];
    }
    *size=*size-1;
}
int main(){
    int arr[10]={10,20,30,40,50,};
    int size=5;
    int pos=3;
    printf("original array: ");
    print_array(arr,size);
    delete_element(arr,&size,pos);
    printf("array after deletion: ");
    print_array(arr,size);
    return 0;
}