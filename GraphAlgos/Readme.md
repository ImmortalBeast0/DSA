Graph Algorithms



This repository contains my implementations of various Graph Algorithms in C++.



The implementations focus on clean code and commonly used techniques in Competitive Programming.



Feel free to check the code and suggest improvements.

Any feedback on the implementation, logic, structure, or optimizations is always welcome.



\---



Topological Sort (Kahn's Algorithm)



=> Requirement / When to Apply



\* Used to find a valid ordering of vertices in a DAG.

\* Not applicable if the graph contains a cycle.



=> Technique Used



\* BFS

\* In-Degree Array

\* Queue



=> Time Complexity



\* `O(V + E)`



=> Space Complexity



\* `O(V)`



\---



Disjoint Set Union (Union Find)



=> Requirement / When to Apply



\* Used to maintain disjoint components.

\* Efficiently supports Find and Union operations.



=> Optimizations Used



\* Path Compression

\* Union by Size



=> Functions



make\_set(n)



\* Initializes `n` disjoint sets.



Time: `O(n)`



find\_set(u)



\* Returns the representative of the set containing `u`.



Time: `O(α(n))`



union\_sets(u, v)



\* Merges the sets containing `u` and `v`.



Time: `O(α(n))`



\---



Reference Problems



Topological Sort (Kahn's Algorithm)



\* CSES - Course Schedule

&#x20; https://cses.fi/problemset/task/1679



