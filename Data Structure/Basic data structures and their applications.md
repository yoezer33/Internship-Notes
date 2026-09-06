# Data Structures & Algorithms — Notes
A consolidated reference of core data structures, their key properties, and a topic-wise problem index.

---

## Table of Contents
1. [Array](#1-array)
2. [String](#2-string)
3. [Hashing](#3-hashing)
4. [Linked List](#4-linked-list)
5. [Stack](#5-stack)
6. [Queue](#6-queue)
7. [Tree](#7-tree)
8. [Graph](#8-graph)

---

## 1. Array

**Definition:** A linear data structure that stores items at contiguous memory locations (or contiguous references, in languages like Python/JS/Java-non-primitive).

**Key Advantages:**
- **Random Access** — O(1) access to the i-th item via base address + offset.
- **Cache Friendliness** — contiguous storage benefits from locality of reference.

**Use Cases:** Building block for Stack, Queue, Deque, Graph, Hash Table.
**Limitations:** Poor performance for insert/delete in the middle, and searching unsorted data.

### Prerequisites
- Binary Search
- Sorting: Selection, Insertion, QuickSort, MergeSort, CycleSort, HeapSort
- Two Pointers Technique
- Prefix Sum Technique
- Basics of Hashing
- Window Sliding Technique

### Problem Index
**Basic**
- Print Alternates, Leaders in an Array, Remove Duplicates (Sorted), Generate all Subarrays, Reverse an Array, Rotate an Array, Move Zeroes to End, Min Increments to Make Equal, Min Cost to Make Size 1

**Easy**
- Duplicate within K Distance, Make Even Positioned Greater, Sum of all Subarrays, Stock Buy/Sell (Multiple Transactions), Single Among Doubles, Missing Number, Missing & Repeating, Only Repeating (1 to n-1), Sorted Subsequence of Size 3, Max Subarray Sum, Equilibrium Index, Split Array into Three Equal Sums

**Medium**
- Make arr[i] = i, Maximum Circular Subarray Sum, Reorder by Given Indexes, Product Except Self, K-th Largest Sum Subarray, Smallest Subarray with Sum > x, Majority Element, Count Possible Triangles, Construct Array from Pair-Sums, Next Permutation

**Hard**
- Surpasser Count, Trapping Rain Water, Top K Frequent Elements, Kth Missing Positive Number, Stock Buy/Sell (At Most K / At Most 2 Transactions), Median in a Stream, Smallest Difference Triplet (3 arrays), Max Occurred Integer in N Ranges

**Expert / Competitive Programming**
- MO's Algorithm, Square Root Decomposition, Sparse Table, Range Sum Query (Sparse Table), Range Minimum Query, Range LCM Queries, Merge Sort Tree, Minimum Jumps to Reach End, Space Optimization via Bit Manipulation, Max Value of Sum(i×arr[i]) with Rotations

---

## 2. String

**Definition:** A sequence of characters.

**Key Properties:**
- Small, fixed character set (e.g., 26 lowercase letters, 256 ASCII) — enables faster sorting/counting.
- Immutable in Java, Python, JavaScript, C#.

### Problem Index
**Basic Operations**
- Length, Check for Same, Search a Character, Insert/Remove a Character, Remove all Occurrences, Concatenation, Reverse a String, Generate all Substrings

**Easy**
- Check for Binary, Camel Case Conversion, Substrings with Corners as 1s, Check for Pangram/Palindrome/Substring/Subsequence/Anagrams/K-Anagrams, URLify

**Medium**
- First Repeating/Non-Repeating Character, Check for Rotation, K'th Non-Repeating Character, Implement atoi, Validate IP Address, Add/Multiply Large Numbers (as strings), Isomorphic Strings, Remove Adjacent Duplicates, Roman to Integer, Interleaved Strings, Permutations of a String, Longest Palindromic Substring, Anagram Substrings, Binary Strings without Consecutive 1's, Lexicographically Next String, Split into Four Distinct Strings, Word Break, Minimum Swaps for Bracket Balancing, Mobile Numeric Keypad Sequence, Shortest Path to Print a String

**Hard**
- Lexicographic Rank of a String, Multiply Large Numbers, Ways to Increase LCS Length by One, Alien Dictionary, Make Two Strings Anagram (with/without deletion), Palindrome Substring Queries, Word Search (8-direction / 4-direction zig-zag), Minimum Bracket Reversals, Word Wrap Problem, Decode a Recursively Encoded String

---

## 3. Hashing

**Definition:** Maps data to indices in a hash table via a hash function for fast access.

**Key Properties:**
- Search, insert, delete all achievable in **O(1) average time**.
- Used to implement sets (distinct items) and dictionaries (key-value pairs).
- Example: `H(x) = x % 10` (modulo hashing).

### Problem Index
**Basics**
- Introduction, Applications, Separate Chaining, Open Addressing

**Easy**
- Check for Subset/Disjoint/Equal, Fizz Buzz, Max Distance Between Two Occurrences, Duplicate within K Distance, Intersection/Union of Two Arrays, Most Frequent Element, 2 Sum (Exists / Count Pairs), Count Pairs with Given Diff, Only Repetitive Element (1 to n-1), Missing of a Range, Missing from Min to Max, Minimum Subsets with Distinct Elements, Minimum Removals for No Common Element, Max Points on Same Line

**Medium**
- Pair Sums Divisible by K, Subarray with Sum Divisible by K, 3 Sum (Count Triplets / Find All Triplets = 0), Itinerary from Tickets, Longest Subarray with Majority > K, Employees Under Every Manager, Largest Subarray with 0 Sum, Subarray with Given Sum, Longest Consecutive Subsequence, Largest Fibonacci Subset, Consecutive Subset Partitioning, Distincts in Every Window of Size K, Design Insert/Delete/Search/getRandom O(1), Min Insertions for Palindrome Permutation, Smallest Subarray with K Distinct Numbers, Pairs (a,b) where a % b = k, Group Words with Same Character Set, K-th Distinct Element

**Hard**
- Represent Fraction as String, 4 Sum (Count / Find All Quadruplets / From Four Sorted Arrays), Largest Subarray with Equal 0s/1s, Longest Common Sum Span, Palindrome Substring Queries, Subarrays with Total Distinct Count, Maximum Array from Two Arrays, Sum of All Unique Subarray Sums, Recaman's Sequence, Longest Strict Bitonic Subsequence, Duplicate Subtrees, Submatrix with Corners as 1

---

## 4. Linked List

**Definition:** A linear data structure of nodes connected via links; nodes are **not** necessarily contiguous in memory.

**Node structure:** data + link (pointer to next node). The list starts at a **head** node.

**Linked List vs. Array**

| Aspect | Linked List | Array |
|---|---|---|
| Data Structure | Non-contiguous | Contiguous |
| Memory Allocation | Per-element | Whole block |
| Insertion/Deletion | Efficient | Inefficient |
| Access | Sequential | Random |

### Problem Index
**Basics**
- Singly / Doubly / Circular Linked List, Applications & Advantages

**Operations**
- Length, Print, Search, Insertion, Deletion (by key / by position), Delete Entire List, Nth Node from Start/End, Size of Doubly Linked List

**Easy**
- Remove Every K-th Node, Middle of a Linked List, Count Occurrences, Circular List Traversal/Check/Count, Deletion from Circular List, Singly → Circular Conversion, Exchange First & Last (Circular), Delete in Doubly Linked List, Reverse (Singly / Doubly)

**Medium**
- Swap Nodes in Pairs, Detect Loop, Length of Loop, Design Browser History, Remove Duplicates (Sorted / Unsorted), Intersection of Two Sorted Lists, Partition a List, QuickSort on Singly Linked List, Split Circular List into Two Halves, Merge Two Sorted Lists, Union & Intersection, Merge Sort (Doubly Linked List), Pairs with Sum (DLL), Insert in Sorted Way (DLL), Remove Duplicates from Unsorted DLL, Rotate a Linked List / Doubly Linked List by N, Delete Node Given Only Its Pointer, Segregate Even and Odd Nodes

**Hard**
- Merge K Sorted Lists, Intersection Point of Two Lists, Implement LRU Cache, Clone a List with Random Pointer, Binary Tree ↔ Doubly Linked List, Reverse in Groups (Singly / Doubly), Sublist Search, Linked List from 2D Matrix, Rotate Block-wise, Multiply Two Numbers as Lists, Delete N Nodes After M Nodes

---

## 5. Stack

**Definition:** Linear data structure following **LIFO** (Last In, First Out) — like a stack of plates.

- **Push** = add to top
- **Pop** = remove from top

### Problem Index
**Basics**
- Introduction, Applications, Array Implementation, Linked List Implementation, Implementation using Deque

**Easy**
- The Celebrity Problem, Queue using Stacks, Two Stacks in an Array, Infix↔Postfix↔Prefix conversions (all directions), Check for Balanced Parentheses, Evaluation of Postfix Expression, Reverse a Stack (Recursion), Reversing First K of a Queue, O(1) DS for Function Evaluation

**Medium**
- K Stacks in an Array, Mergeable Stack, Stack using Queues, Previous Smaller Element, Next Greater Element, Stock Span Problem, Buildings Facing Sun, Next Smaller of Next Greater, Next Greater Frequency, Max Product of Indexes (Next Greater Left/Right), Iterative Tower of Hanoi, Sort a Stack, Reverse a Stack (No Extra Space), Delete Middle of a Stack, Check Queue/Stack Sortable, Index of Closing Bracket, Max Diff (Nearest Left/Right Smaller), Delete Consecutive Same Words

**Hard**
- Largest Rectangle in Histogram, Sum of Max of All Subarrays, Max of Mins for Every Window Size, Stack with getMin(), Stack with Max Frequency Element, Longest Valid Substring, Check Redundant Bracket, Stack Permutations, Remove Brackets with +/– Operators

---

## 6. Queue

**Definition:** Linear data structure following **FIFO** (First In, First Out).

**Use Cases:**
- Buffer for speed mismatches (e.g., CPU ↔ keyboard, network devices)
- OS algorithms: CPU Scheduling, Memory Management
- Graph/Tree algorithms: BFS, Level Order Traversal

### Problem Index
**Basics**
- Introduction, Applications, Basic Operations, Array Implementation, Linked List Implementation

**Easy**
- Stack using Queues, Queue using Stacks, Level Order Traversal, BFS for a Graph, FIFO Page Replacement

**Medium**
- K Queues in an Array, Reverse a Queue, First Non-Repeating in a Stream, Minimum Knight Steps for Target

**Hard**
- Reverse First K of Queue, Sliding Window Maximum, Shortest Path in Binary Maze, Generate Binary Numbers 1 to N, Maximum Cost Path (via ≤K intermediate nodes), Snake and Ladder Problem, Shortest Safe Route (Landmines)

---

## 7. Tree

**Definition:** Non-linear data structure of nodes connected via edges, with exactly **one path** between any two nodes.

### 7.1 Binary Tree
Introduction, Applications, Properties, Types, Inorder/Preorder/Postorder/Level-Order Traversal, Height/Depth, Level of a Node, Search a Node, Find Parent, Insertion, Deletion, Enumeration of Binary Trees, Find All Leaf Nodes, Array Implementation

### 7.2 Binary Search Tree (BST)
Introduction, Applications, Searching, Insertion, Traversals, Deletion, More Problems

### 7.3 AVL Tree
Introduction, Insertion, Deletion, Weak AVL / Rank Balanced Trees, AVL with Duplicate Keys, Count Greater Nodes, Insert Strings into AVL Tree, Min Nodes for Given Height, Optimal Insertion Sequence, Shapes of AVL at Height h

### 7.4 Red-Black Tree
Introduction, Insertion, Top-Down Insertion, Deletion, Applications/Advantages/Disadvantages

### 7.5 Ternary Search Tree
Introduction, Deletion, Auto-Complete Feature, Longest Word in TST

### 7.6 N-ary (Generic) Tree
Introduction, Depth, Children of a Node, Find Siblings, Mirror of Tree, Diameter, Level Order Traversal, Sum of Elements, Serialize & Deserialize

### 7.7 B-Tree
Introduction, Insert Operation, Delete Operation, Insert without Aggressive Splitting

### 7.8 B+ Tree
Introduction, Insertion, Deletion

### 7.9 Other Tree Types
- **Ternary Tree** — Introduction, Create DLL from Ternary Tree
- **Interval Tree** — Introduction, GNU Tree-based Container Implementation
- **2-3-4 Tree** — Introduction, 2-3 Tree (Search/Insert/Deletion)

---

## 8. Graph

**Definition:** A collection of nodes (vertices) connected by edges, used to represent relationships between entities.

> For a topic-wise breakdown (DFS, BFS, Topological Sort, Shortest Path, etc.), refer to a dedicated **Graph Algorithms** resource.

### Basics
Introduction to Graphs, Representations, Transpose Graph

### Easy
- BFS / DFS Traversal, Shortest Path in Unweighted Graph, 0-1 BFS, Count Trees in a Forest, Topological Sorting (all sorts, Kahn's Algorithm), Sum of Dependencies, Maximum Weight Node

### Medium
- Transitive Closure (DFS), Rotten Tomatoes, Islands in a Graph, Flood Fill, Bipartite Check, Word Ladder, Snakes and Ladder, Water Jug Problem, Shortest Path in Binary Matrix, Clone a Graph / DAG, Detect Cycle (Directed / Undirected), Detect Negative Cycle (Bellman-Ford / Floyd Warshall), Cycles of Length N, Disjoint Set (Union-Find) — with Rank & Path Compression, Dijkstra's Algorithm, Bellman-Ford, Floyd Warshall, Johnson's Algorithm, Multistage Graph, Karp's Minimum Mean Cycle, Min Weight Cycle, Prim's MST, Kruskal's MST, Prim's vs Kruskal's, Applications of MST, Min Cost to Connect Cities, Min Product Spanning Tree, Reverse Delete Algorithm, Boruvka's Algorithm, Max Edges Addable to DAG, Longest Path in DAG, Topological Sort via Departure Time, Find Itinerary, Eulerian Path/Circuit, Fleury's Algorithm, Strongly Connected Components, Count Walks with Exactly K Edges, Euler Circuit (Directed), Seven Bridges of Königsberg, Shortest Chain to Target Word, Dynamic Connectivity, Max Flow (Ford-Fulkerson, Dinic's), Edge-Disjoint Paths, Maximum Bipartite Matching, Channel Assignment Problem, Karger's Algorithm, Largest Region in Boolean Matrix, Peterson Graph Problem, Clone Undirected Graph, Graph Coloring, Erdos Renyi Model, Chinese Postman Problem, Hierholzer's Algorithm, Bipartite Check, Snake and Ladder, Boggle, Hopcroft-Karp Algorithm, Minimum Time to Rot Oranges, Construct Graph from Degrees, Universal Sink Detection, Number of Sink Nodes, Two Clique Problem

### Hard
- Pacific Atlantic Water Flow, Total Spanning Trees Count, Longest Path in DAG, Bridges in a Graph, Articulation Points, Biconnected Components, Chain of Strings into a Circle, Tarjan's Algorithm (SCC), Minimum s-t Cut, Traveling Salesman Problem (TSP), Vertex Cover Problem, K Centers Problem

---

## Quick-Reference Summary

| Data Structure | Access | Insert/Delete | Typical Use |
|---|---|---|---|
| Array | O(1) random | O(n) middle | Fixed-size, indexable data |
| String | O(1) index | Immutable (new copy) | Text processing |
| Hash Table | O(1) avg | O(1) avg | Fast lookup, sets/dicts |
| Linked List | O(n) sequential | O(1) at known node | Frequent insert/delete |
| Stack | O(1) top only | O(1) push/pop | LIFO — undo, parsing, DFS |
| Queue | O(1) front/back | O(1) enqueue/dequeue | FIFO — scheduling, BFS |
| Tree | O(log n) balanced | O(log n) balanced | Hierarchical data, search |
| Graph | Varies | Varies | Relationships/networks |