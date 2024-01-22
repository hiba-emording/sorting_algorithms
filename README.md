# Sorting Algorithms & Big O Notations 🚀

This repository contains C programs implementing various sorting algorithms and their corresponding Big O notations for time complexity.

## Files 📂

| File                  | Description                                             |
|-----------------------|---------------------------------------------------------|
| `sort.h`              | Header file with function prototypes and includes.      |
| `print_array.c`       | Helper function to print an array.                      |
| `print_list.c`        | Helper function to print a doubly linked list.          |
| `0-bubble_sort.c`     | Implementation of Bubble Sort algorithm.                |
| `0-O`                 | Big O notations for Bubble Sort.                        |
| `1-insertion_sort_list.c` | Implementation of Insertion Sort for doubly linked list. |
| `1-O`                 | Big O notations for Insertion Sort.                     |
| `2-selection_sort.c`  | Implementation of Selection Sort algorithm.             |
| `2-O`                 | Big O notations for Selection Sort.                    |
| `3-quick_sort.c`      | Implementation of Quick Sort algorithm with Lomuto partition scheme. |
| `3-O`                 | Big O notations for Quick Sort.                         |


## Sorting Algorithms Tasks Overview 🌐

### 0. Bubble Sort 🛁

- **Function**: `void bubble_sort(int *array, size_t size);`
- **Description**: Sorts an array of integers in ascending order using the Bubble Sort algorithm.
- **Big O Notations**:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
💡Bubble Sort is often considered inefficient for large datasets but is easy to understand and implement.

### 1. Insertion Sort 🪞

- **Function**: `void insertion_sort_list(listint_t **list);`
- **Description**: Sorts a doubly linked list of integers in ascending order using the Insertion Sort algorithm.
- **Big O Notations**:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
💡Insertion Sort is efficient for small datasets and partially ordered data.

### 2. Selection Sort 🎯

- **Function**: `void selection_sort(int *array, size_t size);`
- **Description**: Sorts an array of integers in ascending order using the Selection Sort algorithm.
- **Big O Notations**:
  - Best Case: O(n^2)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
💡Selection Sort is simple but generally less efficient than other sorting algorithms.

### 3. Quick Sort ⚡

- **Function**: `void quick_sort(int *array, size_t size);`
- **Description**: Sorts an array of integers in ascending order using the Quick Sort algorithm with Lomuto partition scheme.
- **Big O Notations**:
  - Best Case: O(n log n)
  - Average Case: O(n log n)
  - Worst Case: O(n^2)
💡Quick Sort is widely used and performs well for large datasets.

## Lomuto Partition Scheme 🧩

The Lomuto partition scheme is a method used in the Quick Sort algorithm for dividing an array into two partitions. It works by selecting a pivot element (usually the last element) and partitioning the array into elements less than the pivot and elements greater than the pivot. The pivot is then placed at its final sorted position in the array.

### Explanation:

1. **Choosing the Pivot**: The last element of the partition is chosen as the pivot.

2. **Partitioning**: Iterate through the array, and for each element smaller than the pivot, swap it with the element at the current position of the "smaller" pointer. This partitions the array into elements less than or equal to the pivot on the left and elements greater than the pivot on the right.

3. **Placing the Pivot**: Swap the pivot with the element at the position after the "smaller" pointer. The pivot is now in its final sorted position.

4. **Recursion**: Recursively apply the same process to the left and right partitions.

💡The Lomuto partition scheme is straightforward to implement, but it may not be as efficient as the Hoare partition scheme for certain datasets.

