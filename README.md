# Experiment 15 – Recursion in C++

**Student:** Rajendra Chaganti  
**PRN:** 24070123150  
**Batch:** B3  

---

## Aim  
To implement and understand the concept of **Recursion in C++** with practical examples including **Factorial, Sum of Natural Numbers, String Reversal, and Integer Reversal**.  

---

## Theory  

- **Recursion** is a process where a function calls itself directly or indirectly to solve a problem.  
- Every recursive function must have:  
  - **Base Case** – A terminating condition to stop recursion.  
  - **Recursive Case** – Function calls itself with a smaller subproblem.  
- Applications demonstrated:  
  - Factorial of a number  
  - Sum of first `n` natural numbers  
  - Reversing a string  
  - Reversing an integer  

---

## Algorithm  

### Experiment 15 A – Factorial using Recursion  

1. Start the program.  
2. Define a function `fact(int n)` to calculate factorial.  
3. Base case: If `n <= 1`, return `1`.  
4. Recursive case: Return `n * fact(n-1)`.  
5. Accept a number from the user.  
6. Call the recursive function and display factorial.  
7. End the program.  

---

### Experiment 15 B – Sum of Natural Numbers using Recursion  

1. Start the program.  
2. Define a function `sumup(int n)` to calculate sum.  
3. Base case: If `n <= 1`, return `1`.  
4. Recursive case: Return `n + sumup(n-1)`.  
5. Accept a number from the user.  
6. Call the recursive function and display sum.  
7. End the program.  

---

### Experiment 15 C – String Reversal using Recursion  

1. Start the program.  
2. Define a function `print_rev(char* str)`.  
3. Base case: If `*str == '\0'`, stop recursion.  
4. Recursive case: Call `print_rev(str+1)` and then print current character.  
5. Accept a string from the user.  
6. Call the recursive function and display reversed string.  
7. End the program.  

---

### Experiment 15 D – Integer Reversal using Recursion  

1. Start the program.  
2. Define a function `print_rev(int i)`.  
3. Base case: If `i <= 0`, stop recursion.  
4. Recursive case: Print last digit (`i % 10`) and call `print_rev(i/10)`.  
5. Accept/initialize an integer.  
6. Call the recursive function and display reversed integer.  
7. End the program.  

---

## Conclusion  

- Successfully implemented recursion for solving problems in **factorial, summation, and reversal operations**.  
- Learned how recursion works with **base case** and **recursive case**.  
- Recursion provides an elegant solution for problems that can be broken down into smaller subproblems.  

---
