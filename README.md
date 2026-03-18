# 🔄 push_swap

Because Swap_push isn't as natural. **push_swap** is an algorithmic project at 1337 (42 Network) that challenges you to sort data on a stack, with a highly limited set of instructions, using the lowest possible number of actions. 

---

## 📖 About The Project

The goal of this project is to calculate and display on the standard output the smallest program (sequence of instructions) that sorts the integer arguments received. 

You start with two stacks: **Stack A** and **Stack B**.
* **Stack A** contains a random amount of negative and/or positive numbers which cannot be duplicated.
* **Stack B** is empty.

The objective is to sort the numbers in Stack A in ascending order using only specific operations, while optimizing the algorithmic complexity to keep the total instruction count as low as possible.

---

## 🧠 The Strategy: The Turk Algorithm

To achieve maximum efficiency and comfortably pass the strictest instruction limits (getting full points for 100 and 500 numbers), this implementation uses the **Turk Algorithm**. 

Instead of arbitrarily pushing numbers in chunks, the Turk Algorithm dynamically calculates the "cost" of moving every single number and always executes the cheapest possible move.

### How it works:
1. **The Setup:** Push two numbers from Stack A to Stack B to establish a minimum and maximum reference point.
2. **Cost Calculation (The Core):** For every remaining element in Stack A, the algorithm calculates exactly how many operations it would take to place it into its correct relative descending position in Stack B.
3. **Execute the Cheapest:** The algorithm identifies the element in Stack A with the absolute lowest total move cost. Whenever possible, it utilizes synchronized double rotations (`rr` or `rrr`) to align both stacks simultaneously, then executes the push (`pb`).
4. **The Base Case:** This process repeats until exactly 3 elements remain in Stack A. A hardcoded, highly efficient micro-sort organizes these final 3 elements in maximum 2 operations.
5. **Push Back:** Every element is then pushed back from Stack B to Stack A (`pa`), with Stack A rotating exactly the right amount to receive each element in ascending order.
6. **Final Alignment:** Finally, Stack A is rotated one last time to bring the absolute smallest number to the top.

---

## 🛠️ The Rules & Operations

To sort the stacks, you are only allowed to use the following operations:

| Code | Instruction | Description |
| :--- | :--- | :--- |
| **`sa`** | Swap A | Swap the first 2 elements at the top of stack A. |
| **`sb`** | Swap B | Swap the first 2 elements at the top of stack B. |
| **`ss`** | Swap A + B | `sa` and `sb` at the same time. |
| **`pa`** | Push A | Take the first element at the top of b and put it at the top of a. |
| **`pb`** | Push B | Take the first element at the top of a and put it at the top of b. |
| **`ra`** | Rotate A | Shift up all elements of stack A by 1. The first element becomes the last. |
| **`rb`** | Rotate B | Shift up all elements of stack B by 1. The first element becomes the last. |
| **`rr`** | Rotate A + B | `ra` and `rb` at the same time. |
| **`rra`** | Reverse Rotate A | Shift down all elements of stack A by 1. The last element becomes the first. |
| **`rrb`** | Reverse Rotate B | Shift down all elements of stack B by 1. The last element becomes the first. |
| **`rrr`** | Rev. Rotate A + B| `rra` and `rrb` at the same time. |

---

## 🚀 Getting Started

### Prerequisites
* A standard C compiler (`cc`, `gcc`, or `clang`)
* `make` utility

### Installation & Compilation

1. Clone the repository:
   ```bash
   git clone [https://github.com/yuuryyy/push_swap.git](https://github.com/yuuryyy/push_swap.git)
   cd push_swap
   ```

2. Compile the executable:
   ```bash
   make
   ```
   This will generate the `push_swap` executable.

### Makefile Rules
* `make` / `make all`: Compiles the program.
* `make clean`: Removes the compiled `.o` object files.
* `make fclean`: Removes object files and the `push_swap` executable.
* `make re`: Runs `fclean` followed by `all`.

---

## 💻 Usage

Run the program by passing a list of integers as arguments. The program will output the sequence of instructions required to sort the list.

```bash
./push_swap 4 67 3 87 23
```

**Expected Output:**
```text
pb
pb
ra
sa
pa
pa
```

### Testing with `wc`
To see exactly how many instructions your algorithm is taking to pass the tests, you can pipe the output into `wc -l`:
```bash
./push_swap 4 67 3 87 23 | wc -l
```

---
*Developed by Youssra Chagri at 1337 (UM6P).*
