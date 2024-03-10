#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int array[SIZE];

int main() {
    srand(time(NULL));

    // Filling the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 100;
    }

    // Printing the original array
    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Bubble sort
    void bubble_sort();

    // Printing the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void bubble_sort() {
    int temp;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

