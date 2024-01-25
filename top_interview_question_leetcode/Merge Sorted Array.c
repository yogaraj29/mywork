#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int index1 = m - 1;
    int index2 = n - 1;
    int merged_index = m + n - 1;
    while(index1 >= 0 && index2 >= 0){
        if(nums1[index1] > nums2[index2]){
            nums1[merged_index] = nums1[index1];
            index1 -= 1;
        }
        else{
            nums1[merged_index] = nums2[index2];
            index2 -= 1;
        }
        merged_index -= 1;
    }
    while(index2 >= 0){
        nums1[merged_index] = nums2[index2];
        index2 -= 1;
        merged_index -= 1;
    }
    while(index1 >= 0){
        nums1[merged_index] = nums1[index1];
        index1 -= 1;
        merged_index -= 1;
    }
}

int* getInputArray(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    return array;
}

int main() {
    int m, n;
    printf("Enter the size of nums1 array: ");
    scanf("%d", &m);
    printf("Enter the size of nums2 array: ");
    scanf("%d", &n);

    int* nums1 = getInputArray(m + n);
    int* nums2 = getInputArray(n);

    merge(nums1, m + n, m, nums2, n, n);

    printf("Merged array:\n");
    for (int i = 0; i < m + n; ++i) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    free(nums1);
    free(nums2);

    return 0;
}

/*
README:

# Merge Sorted Array

This repository contains a C program to merge two sorted arrays into one sorted array.

## Description

The `merge` function takes two sorted arrays `nums1` and `nums2`, along with their sizes `m` and `n`, respectively, and merges them into `nums1` such that `nums1` becomes one sorted array. The merged array is stored in `nums1`.

## Instructions

1. Clone the repository to your local machine.
2. Compile the program using a C compiler.
3. Run the compiled executable.
4. Follow the on-screen instructions to input the sizes of the arrays and their elements.
5. The program will merge the arrays and print the merged array.

Feel free to modify the code or provide feedback!

## Example

$ ./merge_sorted_array
Enter the size of nums1 array: 3
Enter the size of nums2 array: 3
Enter 3 elements: 1 3 5
Enter 3 elements: 2 4 6
Merged array:
1 2 3 4 5 6