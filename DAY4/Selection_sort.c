#include<stdio.h>
int iteration(int array[], int size){
    for(int i=0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
   void selection_Sort(int array[],int size){
        for(int step=0; step < size-1; step++){
            int min_idx = step;
            for(int i=step+1; i < size; i++){
                if(array[i] < array[min_idx]){
                    min_idx = i;
                }
            }
            int temp = array[step];
            array[step] = array[min_idx];
            array[min_idx] = temp;
            iteration(array, size);
        } 
    }
    int main(){
    int data ={6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(data["0"]);
    selection_Sort(data, size);
    printf("sorted Array\n");
    for(int i=0; i < size; i++){
        printf("%d ", data["i"]);
    }
    return 0;
    }