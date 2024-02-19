# C - Sorting algorithms & Big O

## About this project

## In this project I learnt and practiced;

- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm
- I went ahead to implement 12 different sorting algorithms in 12 files.

## Tasks file descriptions:
- sort.h: Header file containing definitions and prototypes for all types and functions written for the 12 tasks in this peoject.

- deck.h: Header file containing definitions and prototypes for all types and functions written for the ask 1000-sort_deck.c.

- print_array.c: C function that prints an array of integers as a helper function for the sorting functions

- print_list.c: C function that prints a listint_t doubly-linked list as a helper function for the sorting functions.

## 0-bubble_sort.c: C function that sorts an array of integers in ascending order using the Bubble Sort algorithm.

- Prints the array after each swap.

## v0-O: Text file containing the best, average, and worst case time complexities of the Bubble Sort algorithm, one per line.

## 1-insertion_sort_list.c: C function that sorts a listint_t doubly-linked list of integers in ascending order using the Insertion Sort algorithm.

- Prints the list after each swap.

## 1-O: Text file containing the best, average, and worst case time complexities of the Insertion Sort algorithm, one per line.

## 2-selection_sort.c: C function that sorts an array of integers in ascending order using the Selection Sort algorithm.

- Prints the array after each swap.

## 2-O: Text file containing the best, average, and worst case time complexities of the Selection Sort algorithm, one per line.

## 3-quick_sort.c: C function that sorts an array of integers in ascending order using the Quick Sort algorithm.

- Implements the Lomuto partition scheme.

- Always uses the last element of the partition being sorted as the pivot.

- Prints the array after each swap.

## 3-O: Text file containing the best, average, and worst case time complexities of the Quick Sort Lomuto Partition scheme algorithm, one per line.

## 100-shell_sort.c: C function that sorts an array of integers in ascending order using the Shell sort algorithm.

- Implements the Knuth interval sequence.

- Prints the array each time the interval is decreased.

## 101-cocktail_sort_list.c: C function that sorts a listint_t doubly-linked list of integers in ascending order using the Cocktail Shaker Sort algorithm.

- Prints the list after each swap.

## 101-O: Text file containing the best, average, and worst case time complexities of the Cocktail Shaker Sort algorithm, one per line.

## 102-counting_sort.c: C function that sorts an array of integers in ascending order using the Counting Sort algorithm.

- Assumes that the array will only contain numbers >= 0.

- Prints the counting array after it has been initialized.

## 102-O: Text file containing the best, average, and worst case time complexities of the Counting Sort algorithm, one per line.

## 103-merge_sort.c: C function that sorts an array of integers in ascending order using the Merge Sort algorithm.

- Implements the top-down Merge Sort algorithm.

- When an array is divided, the size of the left subarray is always less than or equal to the size of the right subarray.
- Always sorts the left subarray before the right one.
- Prints subarrays each time they are merged.

## 103-O: Text file containing the best, average, and worst case time complexities of the Merge Sort algorithm, one per line.

## 104-heap_sort.c: C function that sorts an array of integers in ascending order using the Heap Sort algorithm.

- Implements the sift-down Heap Sort algorithm.

- Prints the array after each swap.

## 104-O: Text file containing the best, average, and worst case time complexiites of the Heap Sort algorithm, one per line.

## 105-radix_sort.c: C function that sorts an array of integers in ascending order using the Radix Sort algorithm.

- Implements the Least-Significant-Digit (LSD) Radix Sort algorithm.

- Assumes that the array will only contain numbers >= 0.

- Prints the array for each significant digit increase.

## 105-O: Text file containing the best, average, and worst case time complexities of the Radix Sort algorithm, one per line.

## 106-bitonic_sort.c: C function that sorts an array of integers in ascending order using the Bitonic Sort algorithm.

- Assumes that size is a power of 2 (ie. size can be expressed as 2^k where k >= 0).

- Prints subarrays each time they are merged.

## 106-O: Text file containing the best, average, and worst case time complexities of the Bitonic Sort algorithm, one per line.

## 107-quick_sort_hoare.c: C function that sorts an array of integers in ascending order using the Quick Sort algorithm.

- Implements the Hoare partition scheme.

- Always uses the last elemement of the partition being sorted as the pivot.

- Prints the array after each swap.

## 107-O: Text file containing the best, average, and worst case time complexities of the Quick Sort Hoare Partition cheme algorithm, one per line.

## 1000-sort_deck.c: C function that sorts a deck_node_t doubly-linked list deck of cards.

- Assumes that there are exactly 52 elements in the doubly-linked list.

Orders the deck from spades to diamonds and from aces to kings.
