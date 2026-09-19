/*Implement Queue data structures in C*/
#include <stdio.h>
#define size 5
void enqueue(int);
void dequeue();
void display();
int item[size],front=-1,rear=-1;
int main(){
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();
    return 0;   
}
void enqueue(int value){
    if(rear==size-1){
        printf("Full");
    }
    else{
        if(front==-1)
            front=0;
        rear++;
        item[rear]=value;
        printf("Inserted=%d",value);
    }
}
void dequeue(){
    if(front==-1 ){
        printf("Empty");
    }
    else{
        printf("Deleted=%d",item[front]);
        front++;
        if (front>rear){
            front=rear=-1;
        }
    }
}
void display(){
    if(rear==-1){
        printf("Empty");
    }
    else{
        int i;
        printf("Queue elements are:\n");
        for(int i=front;i<=rear;i++){   
         printf("%d ",item[i]);
        }
        printf("\n");
    }
}

