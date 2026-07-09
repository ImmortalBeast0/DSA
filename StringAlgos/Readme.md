Manacher Algorithm

This repository contains my implementation of the Manacher Algorithm in C++.

The Manacher Algorithm is used to find the longest palindromic substring centered at every position in a string in linear time.

---

Technique Used

* Bounding Box (Mirror) Technique
* Previously computed palindrome information is reused to skip unnecessary comparisons, making the algorithm run in linear time.

---

Build()

Builds the Manacher array (`p[]`), where each position stores the radius of the longest palindrome centered at that position.

=> Time Complexity

* `O(n)`

---

getLongestPalinLen(center, odd)

Returns the length of the longest palindrome centered at the given index.

* `odd = true` → Returns the longest odd-length palindrome.
* `odd = false` → Returns the longest even-length palindrome.

=> Time Complexity

* `O(1)`

---

isPalindrome(l, r)

Checks whether the substring from index `l` to `r` is a palindrome by using the precomputed Manacher array.

=> Time Complexity

* `O(1)`

---

Overall Complexity

* Build: `O(n)`
* Each `getLongestPalinLen()` Query: `O(1)`
* Each `isPalindrome()` Query: `O(1)`
* Space Complexity: `O(n)`
