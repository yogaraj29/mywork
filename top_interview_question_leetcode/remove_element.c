#include <stdio.h>

// Function declaration
int removeElement(int* nums, int numsSize, int val);

int main() {
    // Get user input for array size
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    // Allocate memory for the array
    int nums[numsSize];

    // Get user input for array elements
    printf("Enter %d elements separated by spaces: ", numsSize);
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    // Get user input for the value to be removed
    int val;
    printf("Enter the value to be removed: ");
    scanf("%d", &val);

    printf("Original Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    // Remove val from the array
    int newSize = removeElement(nums, numsSize, val);

    printf("Array after removing %d: ", val);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

// Function definition
int removeElement(int* nums, int numsSize, int val) {
    // Counter to keep track of non-val elements
    int c = 0;

    // Iterate through the array
    for (int i = 0; i < numsSize; i++) {
        // If the current element is not equal to val
        if (nums[i] != val) {
            // Move the non-val element to the front of the array
            nums[c] = nums[i];
            // Increment the counter
            c++;
        }
    }

    // The counter now represents the new size of the array without val
    return c;
}

/*
README:

# Array Manipulation in C

This is a simple C program that removes a specified value from an array.

## Instructions

1. Compile and run the program.
2. Enter the size of the array, followed by the array elements separated by spaces.
3. Enter the value to be removed.
4. The program will display the original array and the array after removing the specified value.

Feel free to modify the code or provide feedback!
*/
