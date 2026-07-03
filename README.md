# C++ STL (Standard Template Library) 

A complete reference for the most commonly used C++ STL containers and algorithms with syntax, functions, complexity, characteristics, and common use cases.

---

# 📑 Table of Contents

- Vector (`<vector>`)
- Algorithm (`<algorithm>`)
- Stack (`<stack>`)
- Queue (`<queue>`)
- Deque (`<deque>`)
- List (`<list>`)
- Map (`<map>`)
- Unordered Map (`<unordered_map>`)

---

# 📦 Vector (`<vector>`)

A **`vector`** is a dynamic array that automatically resizes itself when elements are added or removed. It stores elements in **contiguous memory**, providing fast random access.

---

## 📌 Declaration

```cpp
#include <vector>
using namespace std;

vector<DataType> vec;
```

Example:

```cpp
vector<int> vec;
```

---

# 🔑 Common Functions

| Function | Description | Time Complexity |
|----------|-------------|-----------------|
| `push_back()` | Inserts element at the end | O(1)* |
| `emplace_back()` | Constructs element at the end | O(1)* |
| `pop_back()` | Removes last element | O(1) |
| `insert()` | Inserts element at given position | O(n) |
| `erase()` | Removes element(s) | O(n) |
| `clear()` | Removes all elements | O(n) |
| `resize()` | Changes vector size | O(n) |
| `reserve()` | Reserves memory | O(n) |
| `size()` | Returns number of elements | O(1) |
| `capacity()` | Returns allocated capacity | O(1) |
| `empty()` | Checks if vector is empty | O(1) |
| `front()` | Returns first element | O(1) |
| `back()` | Returns last element | O(1) |
| `at()` | Safe element access | O(1) |
| `operator[]` | Direct element access | O(1) |
| `begin()` | Iterator to first element | O(1) |
| `end()` | Iterator after last element | O(1) |
| `swap()` | Swaps two vectors | O(1) |

> *Amortized O(1)

---

# ✨ Characteristics

- ✅ Dynamic size
- ✅ Contiguous memory
- ✅ Fast random access
- ✅ Cache friendly
- ❌ Slow insertion/deletion in middle

---

# 🎯 Common Use Cases

- Dynamic arrays
- Competitive programming
- Graph adjacency lists
- Storing sequences
- DP tables

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Access | O(1) |
| Search | O(n) |
| Insert at End | O(1)* |
| Insert Middle | O(n) |
| Delete End | O(1) |
| Delete Middle | O(n) |

---

# ⚖️ Vector vs Array

| Feature | Vector | Array |
|---------|--------|------|
| Size | Dynamic | Fixed |
| Memory | Dynamic | Static |
| STL Support | ✅ | ❌ |
| Random Access | O(1) | O(1) |
| Resize | ✅ | ❌ |

---
<br> 

# Algorithm (`<algorithm>`)

The **`<algorithm>`** library provides powerful generic algorithms for searching, sorting, counting, modifying, and manipulating STL containers.

---

## 📌 Declaration

```cpp
#include <algorithm>
```

---

# 🔑 Most Used Algorithms

| Function | Description | Complexity |
|----------|-------------|------------|
| `sort()` | Sorts elements | O(n log n) |
| `stable_sort()` | Stable sorting | O(n log²n) |
| `reverse()` | Reverses range | O(n) |
| `max()` | Larger of two values | O(1) |
| `min()` | Smaller of two values | O(1) |
| `max_element()` | Largest element | O(n) |
| `min_element()` | Smallest element | O(n) |
| `find()` | Finds element | O(n) |
| `count()` | Counts occurrences | O(n) |
| `binary_search()` | Searches sorted range | O(log n) |
| `lower_bound()` | First ≥ value | O(log n) |
| `upper_bound()` | First > value | O(log n) |
| `next_permutation()` | Next lexicographical permutation | O(n) |
| `prev_permutation()` | Previous permutation | O(n) |
| `copy()` | Copies range | O(n) |
| `fill()` | Assigns value | O(n) |
| `remove()` | Removes matching values | O(n) |
| `unique()` | Removes consecutive duplicates | O(n) |

---

# ✨ Characteristics

- Works with STL iterators
- Generic programming
- Highly optimized
- Supports custom comparators

---

# 🎯 Common Use Cases

- Sorting
- Searching
- Binary Search
- Frequency Counting
- Permutations
- Data Manipulation

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Sort | O(n log n) |
| Search | O(n) |
| Binary Search | O(log n) |
| Reverse | O(n) |
| Count | O(n) |

---
<br> 
    

#  Stack (`<stack>`)

A **`stack`** is a **LIFO (Last In First Out)** container.

Only the top element is accessible.

---

## 📌 Declaration

```cpp
#include <stack>

stack<DataType> st;
```

Example

```cpp
stack<int> st;
```

---

# 🔑 Key Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `push()` | Insert element | O(1) |
| `emplace()` | Construct element | O(1) |
| `pop()` | Remove top | O(1) |
| `top()` | Access top | O(1) |
| `size()` | Number of elements | O(1) |
| `empty()` | Checks empty | O(1) |
| `swap()` | Swap stacks | O(1) |

---

# ✨ Characteristics

- LIFO structure
- No random access
- Only top element accessible

---

# 🎯 Common Use Cases

- DFS
- Undo operations
- Parentheses matching
- Expression evaluation
- Backtracking

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Push | O(1) |
| Pop | O(1) |
| Top | O(1) |

---
<br> 
    
# 🚶 Queue (`<queue>`)

A **queue** is a **FIFO (First In First Out)** container.

---

## 📌 Declaration

```cpp
#include <queue>

queue<DataType> q;
```

---

# 🔑 Key Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `push()` | Insert at rear | O(1) |
| `emplace()` | Construct at rear | O(1) |
| `pop()` | Remove front | O(1) |
| `front()` | First element | O(1) |
| `back()` | Last element | O(1) |
| `size()` | Number of elements | O(1) |
| `empty()` | Checks empty | O(1) |
| `swap()` | Swap queues | O(1) |

---

# ✨ Characteristics

- FIFO
- No random access

---

# 🎯 Common Use Cases

- BFS
- Scheduling
- Simulation
- Buffer management

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Push | O(1) |
| Pop | O(1) |
| Front | O(1) |

---
<br> 
    
# 🔄 Deque (`<deque>`)

A **deque** (Double Ended Queue) allows insertion and deletion from both ends.

---

## 📌 Declaration

```cpp
#include <deque>

deque<DataType> dq;
```

---

# 🔑 Key Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `push_front()` | Insert front | O(1) |
| `push_back()` | Insert back | O(1) |
| `pop_front()` | Remove front | O(1) |
| `pop_back()` | Remove back | O(1) |
| `front()` | First element | O(1) |
| `back()` | Last element | O(1) |
| `insert()` | Insert anywhere | O(n) |
| `erase()` | Remove anywhere | O(n) |
| `size()` | Number of elements | O(1) |
| `empty()` | Checks empty | O(1) |

---

# ✨ Characteristics

- Dynamic
- Fast front/back operations
- Random access

---

# 🎯 Common Use Cases

- Sliding Window
- Monotonic Queue
- BFS
- Double-ended processing

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Front Access | O(1) |
| Back Access | O(1) |
| Insert Front | O(1) |
| Insert Back | O(1) |
| Insert Middle | O(n) |

---
<br> 
    
# 📜 List (`<list>`)

A **list** is a doubly linked list.

---

## 📌 Declaration

```cpp
#include <list>

list<DataType> lst;
```

---

# 🔑 Key Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `push_front()` | Insert front | O(1) |
| `push_back()` | Insert back | O(1) |
| `pop_front()` | Remove front | O(1) |
| `pop_back()` | Remove back | O(1) |
| `insert()` | Insert element | O(1)* |
| `erase()` | Remove element | O(1)* |
| `remove()` | Remove value | O(n) |
| `clear()` | Clear list | O(n) |
| `front()` | First element | O(1) |
| `back()` | Last element | O(1) |
| `size()` | Number of elements | O(1) |
| `empty()` | Checks empty | O(1) |

> *Given iterator

---

# ✨ Characteristics

- Doubly linked list
- No random access
- Fast insertion/deletion

---

# 🎯 Common Use Cases

- Frequent insertions
- Frequent deletions
- LRU Cache
- Linked list implementation

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Insert | O(1) |
| Delete | O(1) |
| Search | O(n) |
| Random Access | ❌ |

---
<br> 
    
# 🗺️ Map (`<map>`)

A **`map`** stores **unique key-value pairs** in **sorted order** using a **Red-Black Tree**.

---

## 📌 Declaration

```cpp
#include <map>

map<KeyType, ValueType> mp;
```

Example

```cpp
map<int,string> mp;
```

---

# 🔑 Key Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `insert()` | Insert key-value | O(log n) |
| `emplace()` | Construct element | O(log n) |
| `operator[]` | Access/Insert | O(log n) |
| `at()` | Access element | O(log n) |
| `find()` | Search key | O(log n) |
| `count()` | Key exists? | O(log n) |
| `erase()` | Delete key | O(log n) |
| `clear()` | Remove all | O(n) |
| `size()` | Number of elements | O(1) |
| `empty()` | Checks empty | O(1) |
| `begin()` | First iterator | O(1) |
| `end()` | End iterator | O(1) |
| `swap()` | Swap maps | O(1) |

---

# ✨ Characteristics

- Unique keys
- Sorted order
- Red-Black Tree
- Supports range queries

---

# 🎯 Common Use Cases

- Ordered dictionary
- Frequency map
- Coordinate compression
- Interval problems
- Ordered traversal

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Insert | O(log n) |
| Delete | O(log n) |
| Search | O(log n) |
| Traverse | O(n) |

---

# ⚖️ Map vs Unordered Map

| Feature | map | unordered_map |
|---------|------|----------------|
| Data Structure | Red-Black Tree | Hash Table |
| Ordering | Sorted | Unordered |
| Search | O(log n) | O(1) Average |
| Insert | O(log n) | O(1) Average |
| Delete | O(log n) | O(1) Average |
| Range Queries | ✅ | ❌ |

---
<br> 
    
# #️⃣ Unordered Map (`<unordered_map>`)

An **`unordered_map`** stores **key-value pairs** using a **hash table**. It provides **average O(1)** time complexity for insertion, deletion, and lookup operations.

---

## 📌 Declaration

```cpp
#include <unordered_map>

unordered_map<KeyType, ValueType> um;
```

Example:

```cpp
unordered_map<int, string> um;
```

---

# 🔑 Key Functions

| Function | Description | Average | Worst |
|----------|-------------|---------|--------|
| `insert()` | Inserts a key-value pair | O(1) | O(n) |
| `emplace()` | Constructs and inserts | O(1) | O(n) |
| `operator[]` | Accesses/Inserts | O(1) | O(n) |
| `at()` | Access existing value | O(1) | O(n) |
| `find()` | Search key | O(1) | O(n) |
| `count()` | Check key exists | O(1) | O(n) |
| `erase()` | Delete key | O(1) | O(n) |
| `clear()` | Remove all | O(n) | O(n) |
| `size()` | Number of elements | O(1) | O(1) |
| `empty()` | Checks empty | O(1) | O(1) |
| `begin()` | First iterator | O(1) | O(1) |
| `end()` | End iterator | O(1) | O(1) |
| `swap()` | Swap maps | O(1) | O(1) |
| `reserve()` | Reserve buckets | O(n) | O(n) |
| `rehash()` | Rebuild table | O(n) | O(n) |
| `bucket()` | Bucket index | O(1) | O(1) |
| `bucket_count()` | Total buckets | O(1) | O(1) |
| `load_factor()` | Average bucket load | O(1) | O(1) |
| `max_load_factor()` | Get/Set max load | O(1) | O(1) |

---

# ✨ Characteristics

- ✅ Unique keys
- ✅ Hash Table
- ✅ Average O(1)
- ❌ Not sorted
- ❌ No range queries
- ❌ Worst case O(n)

---

# 🎯 Common Use Cases

- Frequency counting
- Dictionaries
- Hash tables
- Fast lookup
- Caching
- Competitive Programming

---

# 📊 Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Insert | O(1) Average |
| Delete | O(1) Average |
| Search | O(1) Average |
| Traverse | O(n) |

---

# ⚖️ unordered_map vs map

| Feature | unordered_map | map |
|---------|----------------|------|
| Data Structure | Hash Table | Red-Black Tree |
| Ordering | Unordered | Sorted |
| Search | O(1) Average | O(log n) |
| Insert | O(1) Average | O(log n) |
| Delete | O(1) Average | O(log n) |
| Range Queries | ❌ | ✅ |

---

# ⭐ STL Quick Selection Guide

| Container | Best For |
|------------|----------|
| `vector` | Dynamic arrays |
| `deque` | Front + Back operations |
| `list` | Frequent insert/delete |
| `stack` | LIFO |
| `queue` | FIFO |
| `map` | Ordered key-value storage |
| `unordered_map` | Fast key-value lookup |
| `<algorithm>` | Sorting, searching, manipulation |

---
