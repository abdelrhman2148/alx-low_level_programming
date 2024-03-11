# Search Algorithms

This repository includes implementations of various search algorithms, along with corresponding space and time complexities for each algorithm. The provided data structures include singly linked lists and a singly linked list with an express lane.

## Files and Structures

- **Test Files:** `tests`
- **Header File:** `search_algos.h` contains definitions and prototypes.

### Data Structures

#### 1. Singly Linked List

```c
/**
 * struct listint_s - Singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
```

#### 2. Singly Linked List with Express Lane

```c
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: Singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

## Function Prototypes

### Search Algorithms

| File                   | Prototype                                                   |
|------------------------|-------------------------------------------------------------|
| `0-linear.c`           | `int linear_search(int *array, size_t size, int value);`    |
| `1-binary.c`           | `int binary_search(int *array, size_t size, int value);`    |
| `100-jump.c`           | `int jump_search(int *array, size_t size, int value);`      |
| `102-interpolation.c`  | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`    | `int exponential_search(int *array, size_t size, int value);`   |
| `104-advanced_binary.c`| `int advanced_binary(int *array, size_t size, int value);`   |

## Tasks

### 0. Linear Search

- File: `0-linear.c`
- Description: Searches for a value in an array of integers using linear search.

### 1. Binary Search

- File: `1-binary.c`
- Description: Searches for a value in a sorted array of integers using binary search.

### 7. Jump Search

- File: `100-jump.c`
- Description: Searches for a value in a sorted array of integers using jump search.

### 9. Interpolation Search

- File: `102-interpolation.c`
- Description: Searches for a value in a sorted array of integers using interpolation search.

### 10. Exponential Search

- File: `103-exponential.c`
- Description: Searches for a value in a sorted array of integers using exponential search.

### 11. Advanced Binary Search

- File: `104-advanced_binary.c`
- Description: Searches for a value in a sorted array of integers using advanced binary search.

### 12. Jump Search in a Singly Linked List

- File: `105-jump_list.c`
- Description: Searches for a value in a sorted singly linked list of integers using jump search.

### 13. Linear Search in a Skip List

- File: `106-linear_skip.c`
- Description: Searches for a value in a sorted skipped linked list of integers using jump search.

## Big O Complexity Analysis

### Time Complexity

- `2-O`: Worst case time complexity of linear search.
- `4-O`: Worst case time complexity of binary search.
- `101-O`: Average case time complexity of jump search in an array.
- `107-O`: Average time complexity of jump search in a singly linked list.
- `108-O`: Average time complexity of jump search in a sorted skipped linked list.

### Space Complexity

- `3-O`: Worst case space complexity of iterative linear search.
- `5-O`: Worst case space complexity of binary search.
- `6-O`: Space complexity of the `allocate_map` algorithm.
