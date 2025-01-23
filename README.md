# Gnome Sort Algorithm

Gnome Sort is a simple sorting algorithm based on the concept of a garden gnome sorting flower pots. It is similar to insertion sort but with a different approach to handling unsorted elements. This algorithm is easy to implement and educational, though not the most efficient for large datasets.

---

## **How Gnome Sort Works**
The algorithm starts at the beginning of the array and iteratively compares adjacent elements:
1. If the current element is greater than or equal to the previous one, it moves forward.
2. If the current element is smaller than the previous one, they are swapped, and the algorithm steps back (if possible).
3. This process continues until the gnome has sorted the entire array.

---

## **Features**
- Simple implementation.
- Suitable for small datasets.
- Educational for understanding the basics of sorting.

---

## **Complexity Analysis**

| **Best Case**         | **Worst Case**         | **Average Case**       |
|------------------------|------------------------|-------------------------|
| O(n)                  | O(n²)                 | O(n²)                  |

- **Best Case**: The array is already sorted.
- **Worst Case**: The array is in reverse order.
- **Average Case**: Random order of elements.

---

## **Code Implementation**

### Standard Gnome Sort
```c
#include <stdio.h>
#include <stdlib.h>

// Function to implement Gnome Sort
void gnomeSort(int arr[], int n) {
    int index = 0;

    while (index < n) {
        if (index == 0 || arr[index] >= arr[index - 1]) {
            index++;
        } else {
            // Swap elements
            int temp = arr[index];
            arr[index] = arr[index - 1];
            arr[index - 1] = temp;
            index--;
        }
    }
}

// Driver Code
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    gnomeSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
