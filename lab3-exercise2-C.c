#include <stdio.h>

int getValueFromArray(int *array, int len, int index) {
    // Check if the index is within the bounds of the array
    if (index >= 0 && index < len) {
        // Return the element at the specified index
        return array[index];
    } else {
        // Handle the case where the index is out of bounds
        // You can choose to return a special value or handle it as needed
        printf("Index out of bounds\n");
        return -1; // Example of returning a special value
    }
}

int main() {
    // Example array and index
    int array[] = {10, 20, 30, 40};
    int len = sizeof(array) / sizeof(array[0]);
    int index = 2;
    
    int value = getValueFromArray(array, len, index);
    if (value != -1) {
        printf("The value at index %d is %d.\n", index, value);
    }

    return 0;
}
