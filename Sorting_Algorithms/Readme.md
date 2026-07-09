Sorting Algorithms

This repository contains my implementations of various Sorting Algorithms in C++.

The goal of this repository is to practice clean implementations of sorting algorithms and improve my understanding of where and when each algorithm should be used.

Feel free to check the code and suggest improvements.
Any feedback on the implementation, logic, structure, or optimizations is always welcome.

---

Counting Sort

=> Requirement / When to Apply

* Array values should be within a small range (typically `arr[i] <= 10^5` or `10^6`).
* Works only for integer values.
* Does not directly support negative values (can be handled using an offset if needed).

=> Time Complexity

* `O(n + k)`

=> Space Complexity

* `O(k)`

---

Heap Sort

=> Requirement / When to Apply

* When guaranteed `O(n log n)` time is required.
* When extra memory should be avoided.
* Stability is not required.

=> Time Complexity

* Best: `O(n log n)`
* Average: `O(n log n)`
* Worst: `O(n log n)`

=> Space Complexity

* `O(1)`

---

Merge Sort

=> Requirement / When to Apply

* When stable sorting is required.
* Suitable for Linked Lists.
* Good when consistent performance is preferred.

=> Time Complexity

* Best: `O(n log n)`
* Average: `O(n log n)`
* Worst: `O(n log n)`

=> Space Complexity

* `O(n)`

---

Quick Sort

=> Requirement / When to Apply

* General-purpose sorting.
* This implementation uses a Randomized Pivot to reduce the chances of the worst-case occurring.
* Suitable for Competitive Programming and interview problems.

=> Pivot Selection

* Randomized Pivot

=> Time Complexity

* Best: `O(n log n)`
* Average: `O(n log n)`
* Worst: `O(n²)` (rare with randomized pivot)

=> Space Complexity

* Average: `O(log n)`
* Worst: `O(n)` (recursion stack)

---

More sorting algorithms will be added as I continue learning and implementing them.
