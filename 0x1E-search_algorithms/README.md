# Search Algorithms — Alx Low Level Programming
0x1E. C - Search Algorithms

## Overview
`Search algorithms` are fundamental techniques used to locate specific items within a collection of data. They are crucial in various applications, ranging from simple data retrieval tasks to complex problem-solving scenarios. Let's explore some commonly used search algorithms.

## Linear Search
`Linear search`, also known as sequential search, involves iterating through each element in a collection until the target item is found or the entire collection is traversed. It is straightforward and applicable to both sorted and unsorted arrays.

- **Time Complexity: O(n)** - Linear time complexity, where 'n' represents the number of elements in the collection.
- **Space Complexity: O(1)** - Constant space complexity, as it requires only a few variables for bookkeeping.

Example (in C):
```c
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i; // target is found
        }
    }
    return -1; // target is not found
}
```
## Binary Search
`Binary search` is a more efficient search algorithm that requires the collection to be sorted beforehand. It divides the search space in half at each step, making it suitable for large datasets.

- **Time Complexity: O(log n)** - Logarithmic time complexity, where 'n' represents the number of elements in the sorted collection.
- **Space Complexity: O(1)** - Constant space complexity, as it operates with a few variables for bookkeeping.

Example (in C):
```c
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid; // Return the index if the target is found
        }
        
        if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }
    return -1; // Return -1 if the target is not found
}
```

## Other Search Algorithms
### Jump Search
Jump search is an improvement over linear search for sorted arrays. It jumps ahead by a fixed step size and then performs linear search in the subarray.

- **Time Complexity: O(√n)** - Square root time complexity, where 'n' represents the number of elements in the collection.
- **Space Complexity: O(1)** - Constant space complexity.
### Interpolation Search
Interpolation search is an enhanced version of binary search that works better for uniformly distributed data. It calculates the probable position of the target based on its value and the range of elements.

- **Time Complexity: O(log log n)** - Logarithmic time complexity under favorable conditions.
- **Space Complexity: O(1)** - Constant space complexity.
### Exponential Search
Exponential search involves doubling the index value until a range containing the target is found, followed by binary search within that range.

- **Time Complexity: O(log n)** - Logarithmic time complexity.
- **Space Complexity: O(1)** - Constant space complexity.

## Choosing the Best Search Algorithm
**Linear Search:** Ideal for small collections or when the data is unsorted.

**Binary Search:** Preferable for large, sorted collections.

**Jump Search:** Suitable for larger collections with uniformly distributed data.

**Interpolation Search:** Effective for uniformly distributed and sorted datasets.

**Exponential Search:** Useful when the approximate location of the target is known.

💡The choice between these algorithms depends on the size of the dataset, its distribution, whether it's sorted, and the specific requirements of the application.

## Time Complexity
Time complexity measures how the runtime of an algorithm grows as the size of the input increases. It's denoted using Big O notation.

- **O(1)**: Constant time - runtime remains constant regardless of input size.
- **O(log n)**: Logarithmic time - runtime grows logarithmically with input size.
- **O(n)**: Linear time - runtime increases linearly with input size.
- **O(n log n)**: Linearithmic time - common in divide-and-conquer algorithms.
- **O(n^2)**: Quadratic time - runtime grows quadratically with input size.
- **O(2^n)**: Exponential time - runtime doubles with each additional input.
- **O(n!)**: Factorial time - highly inefficient, grows factorial with input size.

Understanding time complexity helps in selecting efficient algorithms for different problem sizes.

## Space Complexity
Space complexity measures how much memory an algorithm requires relative to the input size.

- **O(1)**: Constant space - memory usage remains constant.
- **O(n)**: Linear space - memory usage grows linearly with input size.
- **O(n^2)**: Quadratic space - memory usage grows quadratically with input size.
- **O(2^n)**: Exponential space - memory doubles with each additional input.
- **O(log n)**: Logarithmic space - memory usage grows logarithmically with input size.

Understanding space complexity aids in optimizing memory usage and selecting appropriate algorithms.

## Contact Me
**Email:** ouadia@elouardy.com \
**Twitter:** https://twitter.com/_ELOUARDY
