#include "header.h"

int createArray(int **array) {
    int arrSize = 0;
    int temp;

    // Prompt user for input
    printf("Enter the size of the array: ");
    scanf("%d", &arrSize);

    // Allocate memory
    *array = malloc(sizeof(int) * arrSize);

    // Populate array
    printf("Enter values to populate array:\n");
    for(int i = 0; i < arrSize; i++) {
        scanf("%d", &temp);
        *(*array+i) = temp;
    }

    return arrSize;
}

int processArray(int *array, int size) {
    int sum = 0;
    int avg = 0;
    int counter = 0;

    // Print array and get sum
    printf("Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
        sum += array[i];
    }
    printf("\n");

    avg = sum / size;
    printf("Average: %d\n", avg);
    printf("Number greater than average: ");
    for(int i = 0; i < size; i++) {
        if(array[i] > avg) {
            printf("%d ", array[i]);
            counter++;
        }
    }
    printf("\n");

    return counter;
}

