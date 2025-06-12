### Number Reduction

This C++ program computes, for each value `X` from 1 to 100, the minimum value that can be reached by repeatedly performing two operations: subtracting 3 (if possible) or dividing by 2 (if the number is even). The `precompute_min_values` function uses Breadth-First Search (BFS) for each `x` to explore all reachable numbers and records the smallest value found during the process.

In `main`, the program reads the number of test cases `T`, then for each input `X`, it simply outputs the precomputed minimum value that can be reached starting from `X`. By precomputing results up to 100, the program answers each test case efficiently in constant time.
