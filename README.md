# cpp-institute-course
Learning C++ fundamentals - C++ Institute course progress

## About
This repository contains my course notes and practice programs from the C++ Institute's [C++ Essentials 1](https://cppinstitute.org/cpp-essentials-1) course. The code demonstrates various C++ concepts and features learned throughout the course modules.

## Course Notes

### Module 1: C++ Basics
**File:** `module-01/notes.cpp`

Topics covered:
- Variables and data types (`int`, `char`, `float`)
- Basic arithmetic operations (addition, subtraction, multiplication, division, modulus)
- Scientific notation (e.g., `5E2` for 500)
- Basic input/output with `std::cout`
- Increment and decrement operators (`++`, `--`)
- Escape sequences (e.g., `\a` for bell character)
- Conditional statements (`if`)
- Function declaration and calling
- Hexadecimal representation of integers

### Module 2: Control Flow and Data Structures
**Files:** `module-02/notes_2.cpp`, `module-02/notes_2_continued.cpp`

Topics covered:
- Conditional statements (`if`, `else`, `else if`, nested conditions)
- Data types: `short`, `unsigned short`, `int`, `long`, `long long`, `long double`, `bool`
- Loop structures:
  - `while` loops
  - `do-while` loops
  - `for` loops
- Loop control (`break`, `continue`)
- Bitwise operators (bitwise AND)
- `switch` statements and case handling
- Arrays (1D and 2D/matrices)
- Structures (`struct`) and member access
- Array initialization

### Module 3: Functions and Memory
**File:** `module-03/notes_3.cpp`

Topics covered:
- Pointers and memory addresses
- Pointer declaration and dereferencing
- Null pointers (`nullptr`)
- `sizeof` operator for data types
- Pointer arithmetic with arrays
- Function parameters (pass by value)
- Pass by reference (`&`)
- Pass by pointer (C-style)
- Global variables and side effects
- Default function parameters
- Multiple function parameters

## Practice Programs

### Square and Root Calculator
**File:** `module-01/squareinput.cpp`

A simple interactive program that demonstrates Module 1 concepts. The program:
- Takes a number as input from the user
- Asks the user to choose between calculating the square or square root
- Uses separate functions for each calculation
- Validates user input and provides error messages for invalid choices
- Demonstrates function declarations, conditional logic, and the `<cmath>` library usage

### Function Call Overhead Test
**File:** `module-03/speedtest.cpp`

A performance comparison program that measures function call overhead. The program:
- Executes 250,000 iterations of a simple calculation both with and without function calls
- Uses `<chrono>` library for high-resolution timing
- Compares execution time to demonstrate the cost of the call/return mechanism
- Shows approximately 2x slowdown for function calls vs. direct execution (if compiler doesn't inline)
- Practical demonstration of concepts discussed in section 3.7.1.2 of the course material

## Repository Structure
```
cpp-institute-course/
├── module-01/
│   ├── notes.cpp              # Module 1 learning notes
│   ├── squareinput.cpp        # Square/root calculator program
│   └── hello-world.cpp        # Initial test program
├── module-02/
│   ├── notes_2.cpp            # Module 2 notes (part 1/2)
│   └── notes_2_continued.cpp  # Module 2 notes (part 2/2)
├── module-03/
│   ├── notes_3.cpp            # Module 3 learning notes
│   └── speedtest.cpp          # Function overhead test program
├── LICENSE
└── README.md
```

## License
This project is licensed under the MIT License - see the LICENSE file for details.

---
*Course material from [C++ Institute - C++ Essentials 1](https://cppinstitute.org/cpp-essentials-1)*