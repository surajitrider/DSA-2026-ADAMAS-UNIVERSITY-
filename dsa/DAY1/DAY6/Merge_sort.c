/*Implement Merge sort*/
#include <stdio.h>
void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0; j = 0; k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int data[] = {6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(data[0]);
    int i = 0;
    int r = size - 1;
    int q = (i + r) / 2;

    mergesort(data, i, r);
    printf("sorted Array\n");
    print_array(data, size);
    return 0;
    
    
}