# Division by Zero Bug in C

This repository demonstrates a common, yet easily overlooked error in C programming: division by zero. The `bug.c` file contains code that attempts to divide an integer by zero, leading to undefined behavior. The `bugSolution.c` file offers a solution to prevent this error.

**Problem:**
The `bug.c` program attempts to divide 10 by 0, which is mathematically undefined. This results in a runtime error, typically a segmentation fault or similar crash.

**Solution:**
The `bugSolution.c` addresses this by adding a check to ensure that the divisor is not zero before performing the division.  This prevents the program from crashing and handles the situation gracefully.

This example highlights the importance of robust error handling in C programming to prevent unexpected behavior and crashes.