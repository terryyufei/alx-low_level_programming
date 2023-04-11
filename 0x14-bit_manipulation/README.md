# Bit Manipulation

>This directory contains ALX task on the bit manipulation project
>It contains a main.h file which has all the prototypes.
>The main.c files are in the .gitignore file becasue we aren't supposed to push them.

**TASK 0**
>The binary_to_uint() function is a C program that converts a binary number represented as a string to its equivalent unsigned integer value. The function takes a pointer to a string containing the binary number and returns an unsigned integer value.

**TASK 1**
>This code defines a function named print_binary that prints the binary representation of an unsigned long integer. The function takes a single parameter n which is an unsigned long integer to be printed in binary.

>The function first checks if the input number is zero. If the number is zero, the binary representation is also zero, so the function prints a single '0' character and returns.

>If the input number is not zero, the function uses recursion to print the binary representation. It first checks if there are any remaining binary digits to print by shifting the input number right by one bit (dividing by 2) and checking if the result is non-zero. If there are remaining digits, the function calls itself with the input number right-shifted by one bit.

>After the recursive call, the function prints the least significant binary digit of the input number by performing a bitwise AND of the input number with 1 (to extract the least significant bit) and adding the resulting binary digit to the ASCII code for '0'. This character is then printed using the *_putchar* function.

**TASK 2**


