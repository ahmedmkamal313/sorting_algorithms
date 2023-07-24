# Sort It Out: A C Project on Sorting Algorithms and Big O Notation

## 🚀 introduction:
This project is a group assignment for **ALX SE**, where we implement four different sorting algorithms in C and analyze their time complexity using Big O notation. The project aims to help us learn about:
- How to select the best sorting algorithm for a given input
- How to evaluate the time complexity of an algorithm
- How to use the Betty style for writing C code
- How to work in teams using pair programming

## 👥 Contributors:
   - [Majda Bouzayd](https://github.com/Magdalina1)
   - [Ahmed Kamal](https://github.com/ahmedmkamal313)

![sorting](https://miro.medium.com/v2/resize:fit:640/0*PgiLG7NytqKAh8WT.)

## 🖥️ Usage:
To use this project, you need to have gcc installed on your system. You can compile the code using the following command:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o sort`
You can run the executable file using the following command:
`./sort`
You can test the code using the provided main.c files or your own. The output will show the original array, the sorted array, and the number of operations performed by the sorting algorithm. For example:
`./sort 0-main.c` Output:
```
Original array: [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
Sorted array: [7, 13, 19, 48, 52, 71, 73, 86, 96, 99]
Number of operations: 19
```

## 📊 Sorting Algorithms
In this project, we implemented four sorting algorithms:

- [Bubble sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/0-bubble_sort.c): A simple algorithm that repeatedly swaps adjacent elements that are out of order until the array is sorted. It has a time complexity of O(n^2) in the worst and average cases, and O(n) in the best case.
- [Insertion sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/1-insertion_sort_list.c): An algorithm that builds the sorted array one element at a time by inserting each element into its correct position. It has a time complexity of O(n^2) in the worst and average cases, and O(n) in the best case.
- [Selection sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/2-selection_sort.c): An algorithm that divides the array into two parts: a sorted part and an unsorted part. It repeatedly selects the smallest element from the unsorted part and moves it to the end of the sorted part. It has a time complexity of O(n^2) in all cases.
- [Quick sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/3-quick_sort.c): An algorithm that uses a divide-and-conquer approach to sort the array. It chooses a pivot element and partitions the array into two subarrays: one with elements smaller than the pivot and one with elements larger than the pivot. It then recursively sorts the subarrays. It has a time complexity of O(n^2) in the worst case, O(n log n) in the average case, and O(n) in the best case.
- [Cocktail shaker sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/101-cocktail_sort_list.c): A variation of bubble sort that traverses the array in both directions alternatively, moving the smallest and largest elements to their correct positions. It has a time complexity of O(n^2) in the worst and average cases, and O(n) in the best case.
- [Counting sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/102-counting_sort.c): An algorithm that counts the number of occurrences of each element in the array and then fills a new array with the elements in sorted order. It has a time complexity of O(n + k) where k is the range of the elements.
- [Merge sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/103-merge_sort.c): An algorithm that uses a divide-and-conquer approach to sort the array. It divides the array into two halves, recursively sorts each half, and then merges them together. It has a time complexity of O(n log n) in all cases.
- [Heap sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/104-heap_sort.c): An algorithm that uses a binary heap data structure to sort the array. It builds a max heap from the array, then repeatedly extracts the maximum element and places it at the end of the sorted array. It has a time complexity of O(n log n) in all cases.
- [Radix sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/105-radix_sort.c): An algorithm that sorts the array by grouping the elements by their individual digits or letters. It has a time complexity of O(nk) where k is the number of digits or letters.
- [Bitonic sort](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/106-bitonic_sort.c): An algorithm that sorts a bitonic sequence (a sequence that is first increasing then decreasing or vice versa) by comparing and swapping pairs of elements that are distant by a certain gap. It has a time complexity of O(n log^2 n) in all cases.
- [Quick Sort - Hoare Partition scheme](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/107-quick_sort_hoare.c): A variation of quick sort that uses a different way of choosing the pivot element and partitioning the array. It has a time complexity of O(n^2) in the worst case, O(n log n) in the average case, and O(n) in the best case.

## 🛠️ Requirements and Dependencies:
To use this project, you need to have the following installed on your system:
- `gcc compiler with the options -Wall -Werror -Wextra -pedantic -std=gnu89`
- [sort.h](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/sort.h) header file that contains the prototypes of all the sorting functions

## 🧩 Data Structure:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
## 🛠️ Helper Files:
- [print_array.c](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/print_array.c)
- [print_list.c](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/print_list.c)

## ♠️ Dealer Task:
- [Sort Deck](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/1000-sort_deck.c):
  - a function that sorts a deck of cards.
  - Prototype: `void sort_deck(deck_node_t **deck);`
- [deck.h](https://github.com/ahmedmkamal313/sorting_algorithms/blob/main/deck.h): data structure:
   ```
    typedef enum kind_e
    {
      SPADE = 0,
      HEART,
      CLUB,
      DIAMOND
    } kind_t;

  /**
   * struct card_s - Playing card
   *
   * @value: Value of the card
   * From "Ace" to "King"
   * @kind: Kind of the card
   */
  typedef struct card_s 
  {
      const char *value;
      const kind_t kind;
  } card_t;

  /**
   * struct deck_node_s - Deck of card
   *
   * @card: Pointer to the card of the node
   * @prev: Pointer to the previous node of the list
   * @next: Pointer to the next node of the list
   */
  typedef struct deck_node_s
  {
      const card_t *card;
      struct deck_node_s *prev;
      struct deck_node_s *next;
  } deck_node_t;
  ```
