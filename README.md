# push_swap

[한국어 버전](README.md.kr)

## Overview
The `push_swap` project challenges you to sort a stack of integers using a set of predefined operations. It emphasizes algorithm optimization and the efficient use of stack manipulation.

- **Objective:** Develop a sorting algorithm with the fewest possible moves.
- **Key Features:**
  - Stack-based sorting with two stacks (`a` and `b`).
  - Implementation of sorting algorithms tailored for smaller data sets.

## Features
- **Supported Operations:**
  - `sa` / `sb` / `ss`: Swap the top two elements of stack `a`, `b`, or both.
  - `pa` / `pb`: Push the top element from stack `b` to `a` or vice versa.
  - `ra` / `rb` / `rr`: Rotate stack `a`, `b`, or both (shift all elements up).
  - `rra` / `rrb` / `rrr`: Reverse rotate stack `a`, `b`, or both (shift all elements down).

- **Efficiency:**
  - Optimized solutions for datasets of varying sizes (e.g., 5 numbers, 100 numbers, and 500 numbers).
  - Performance evaluation based on the total number of moves.

## Requirements
- **Operating System:** Linux or macOS.
- **Dependencies:** None (standard C library).

## Installation and Usage
### Clone the Repository
```bash
git clone [repository URL]
cd push_swap
```

### Build
```bash
make
```
### Execute
```bash
./push_swap "3 2 5 1 4"
```
- The program outputs the sequence of operations required to sort the stack.

### Testing
- To evaluate performance:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```
- Count the number of moves required.
- Check correctness using the checker (if available).

### File Structure
- `srcs/`: Core implementation files.
- `srcs/push_swap.h`: Header file.
- `Makefile`: Build script.

### How It Works
1. Input Parsing:
- Validates the input sequence and initializes the stack.
2. Algorithm:
- Implements a tailored sorting algorithm optimized for stack operations.
3. Output:
- Displays the minimal sequence of operations to sort the stack.

### References
- Stack-based sorting techniques.
- Algorithm optimization strategies.