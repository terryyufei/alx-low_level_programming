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
>In this question we are to write a function that returns the value ofa bit at a given index

>The function returns the value of the bit at the given index in the number n, or -1 if the index is out of bounds.

>The function checks if the index is within the bounds of the number's bits, by comparing it to the size of an unsigned long int multiplied by the number of bits in a byte. If the index is out of bounds, the function returns -1.

>If the index is within bounds, the function returns the value of the bit at the given index using bitwise operations. It uses the & operator to perform a bitwise AND operation between n and a mask that has a 1 at the index position and 0 everywhere else. If the result of this operation is non-zero, the bit at the index position is 1, so the function returns 1. Otherwise, the bit is 0, so the function returns 0.

**TASK 3**

>In this question we are to write a function that sets the value of a bit to 1 at a given index.

>The function sets the value of the bit at the given index in the number pointed to by n to 1 and returns 1. If the index is out of bounds, the function returns -1.

>The function first checks if the index is within the bounds of the number's bits, by comparing it to the size of an unsigned long int multiplied by the number of bits in a byte. If the index is out of bounds, the function returns -1.

>If the index is within bounds, the function sets the value of the bit at the given index to 1 using bitwise operations. It uses the | operator to perform a bitwise OR operation between (*n)* (the value pointed to by n) and a mask that has a 1 at the index position and 0 everywhere else. This sets the bit at the index position to 1 without affecting the other bits in the number. The function then returns 1 to indicate success.

**TASK 4**

>In this question we write a functio that sets the value of a bit to 0 at a given index

>The function clears the value of the bit at the given index in the number pointed to by n to 0 and returns 1. If the index is out of bounds, the function returns -1.

>The function first checks if the index is within the bounds of the number's bits, by comparing it to the size of an unsigned long int multiplied by the number of bits in a byte. If the index is out of bounds, the function returns -1.

>If the index is within bounds, the function clears the value of the bit at the given index to 0 using bitwise operations. It uses the &= operator to perform a bitwise AND operation between (*n)* the value pointed to by n) and a mask that has a 0 at the index position and 1 everywhere else. This clears the bit at the index position to 0 without affecting the other bits in the number. The function then returns 1 to indicate success.

**TASK 5**

>cracked a code and found the password
