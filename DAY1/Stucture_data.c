/*write a c program that takes a data stucture as input (array,linklist,tree or graph)and display whether it is primitive or non-primitive ,linear/non-linearand static/dynamic*/
#include <stdio.h>
    int main()
 {
    int choice;
    printf("--Data Structure Classification Program--\n");
    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n classification:\n");
    switch (choice)
    {
        case 1:
            printf("Data Structure: Array\n");
            printf("Type: Non-Primitive\n");
            printf("Structure: Linear\n");
            printf("Memory Allocation: Static\n");
            break;
        case 2:
            printf("Data Structure: Linked List\n");
            printf("Type: Non-Primitive\n");
            printf("Structure: Linear\n");
            printf("Memory Allocation: Dynamic\n");
            break;
        case 3:
            printf("Data Structure: Tree\n");
            printf("Type: Non-Primitive\n");
            printf("Structure: Non-Linear\n");
            printf("Memory Allocation: Dynamic\n");
            break;
        case 4:
            printf("Data Structure: Graph\n");
            printf("Type: Non-Primitive\n");
            printf("Structure: Non-Linear\n");
            printf("Memory Allocation: Dynamic\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }
    return 0;
}