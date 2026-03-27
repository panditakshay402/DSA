# Data Structures and Algorithms (DSA)

This repository contains my solutions to **Data Structures and Algorithms (DSA)** problems written in **C++**.  
I am solving problems regularly to improve my **problem-solving skills**, **algorithmic thinking**, and **coding efficiency**.

---

## Repository Structure

```
dsa/
│
├── input.txt          # Input for testing programs
├── output.txt         # Output generated after running code
│
├── arrays_two_sum.cpp
├── binary_search.cpp
├── reverse_linked_list.cpp
│
└── .vscode/
    └── tasks.json
```

Each `.cpp` file represents a different **DSA problem solution**.

---

## How to Run the Code

### Compile and Run (Manual Method)

```
g++ -std=c++17 filename.cpp -o program
program.exe < input.txt > output.txt
```

Example:

```
g++ -std=c++17 two_sum.cpp -o program
program.exe < input.txt > output.txt
```

---

### Run using VS Code Task

If you press:

```
Ctrl + Shift + B
```
### Multiple comment using VS Code

If you press:

```
Shift + Alt + A
```
VS Code will automatically:

1. Compile the current C++ file
2. Run the program
3. Take input from `input.txt` for cpp file.
4. Save output to `output.txt` of cpp file.

---

## Example Code Setup

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;

    cout << n << endl;

    return 0;
}
```

---

## Topics Covered

- Arrays
- Strings
- Recursion
- Linked List
- Stack
- Queue
- Trees
- Graphs
- Dynamic Programming
- Greedy Algorithms
- Searching & Sorting
- Bit Manipulation

---

## Language

- C++

---

## Author

**Akshay Pandit**

Practicing Data Structures and Algorithms to strengthen problem-solving skills and prepare for technical interviews.
