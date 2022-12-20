/*
    Name: Ankush Madharha
    Email: amadharh@uoguelph.ca
    Student Number: 1172859
*/

#include "header.h"

int main() {
    int *array = NULL;

    int arrSize = createArray(&array);
    printf("Array Size: %d\n", arrSize);

    int temp = processArray(array, arrSize);
    printf("Count of number greater than average: %d\n", temp);

    return 0;
}