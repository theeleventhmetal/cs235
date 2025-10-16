## Sorting Algorithms

### Selection Sort - O(n<sup>2</sup>)  average, best, and worst time complexity
- first divides list into a sorted list and an unsorted list, initially the sorted list has length 0
- iterates and selects the smallest value of the unsorted, and swaps into the sorted list
- continues iterating and adding smallest value of unsorted to end of sorted

    ```cpp

    for (int i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (theArray[j] < theArray[min]) {
                min = j
            }
        }
    }

### Insertion Sort - O(n<sup>2</sup>) ,O(n), O(n<sup>2</sup>), average, best and worst time complexity
- Builds the sorted list one element at a time.
- Takes each new element and inserts it into the correct position in the already sorted portion.
- Efficient for small or nearly sorted datasets.

    ```cpp
    for (int i = 1; i < n; i++) {
        int key = theArray[i];
        int j = i - 1;
        while (j >= 0 && theArray[j] > key) {
            theArray[j + 1] = theArray[j];
            j = j - 1;
        }
        theArray[j + 1] = key;
    }

## Merge Sort
- 

## Quicksort
- 



