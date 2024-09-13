## Topic Selected: Parallel Programming Platforms: Implicit Parallelism
### Project Overview: Implicit parallelism in parallel programming allows platforms to automatically identify and execute parallel tasks without explicit directives from programmers. In OpenMP, this is illustrated by the compiler's ability to distribute tasks across multiple threads. This project offers a straightforward example of matrix multiplication using OpenMP, demonstrating implicit parallelism by automatically parallelizing loops without the need for explicit thread management.

### Matrix Multiplication with OpenMP: This project demonstrates implicit parallelism using OpenMP in C++ to perform matrix multiplication.

### Prerequisites
Before running the code, ensure that you have the following installed on your system:
1. **C++ Compiler**:
   - GCC (GNU Compiler Collection) or any compiler that supports OpenMP.
   - For GCC, version 4.2 or later is recommended.

2. **OpenMP Library**:
   - OpenMP is typically included with modern C++ compilers like GCC.

### Next Steps

**Compile the Code**:
Open a terminal and navigate to the directory containing `matrix_multiplication.cpp`. Compile the code using the following command:
```bash
g++ -fopenmp -o matrix_multiplication matrix_multiplication.cpp
```
This command tells GCC to use OpenMP (`-fopenmp`) and outputs the executable named `matrix_multiplication`.

**Run the Program**:
Execute the compiled program using the following command:
```bash
./matrix_multiplication
```

## Description: matrix_multiplication.cpp`: 
Contains the C++ code for matrix multiplication using OpenMP for parallelism. 
The program initializes two matrices `A` and `B`, performs multiplication, and outputs the time taken.

## Output:
Matrix Multiplication completed in0.00399995seconds.
Resulting matrix C (size 10x10):
285 240 195 150 105 60 15 -30 -75 -120
330 275 220 165 110 55 0 -55 -110 -165
375 310 245 180 115 50 -15 -80 -145 -210
420 345 270 195 120 45 -30 -105 -180 -255
465 380 295 210 125 40 -45 -130 -215 -300
510 415 320 225 130 35 -60 -155 -250 -345
555 450 345 240 135 30 -75 -180 -285 -390
600 485 370 255 140 25 -90 -205 -320 -435
645 520 395 270 145 20 -105 -230 -355 -480
690 555 420 285 150 15 -120 -255 -390 -525





