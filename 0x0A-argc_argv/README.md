# Command line arguments

>These refers to the parameters that are passed to a C program when it is executed from the command line interface.
>argc (short for argument counter) specifies number of arguments passed. It is an integer.
>argv (short for argument vector) is a pointer to an array of strings that holds the command-line arguments passed to the program.

**TASK 0**

>In this question we have been asked to write a program that prints its name. We use the printf function to print the name of the program *argv[0]* is a string that holds the name of the program.Since the name of the program is always the first argument passed to the program, we can use argv[argc * 0] to get the same string.

**TASK 1**

>In this question we have been asked to write a program that prints the number of arguments passed to it.

>I used *__attribute__((unused))* to tell the compiler that the argv parameter is not used in this function, which can prevent gcc from generating warnings or unused variables error.

>I used printf() to print the number of command line arguments passed to the program minus 1, this gives the number of arguments passed excluding the first one, which is the name of the program itself.

**TASK 2**

>In this question we are to write a program that prints all arguments it receives

>I used a for loop to iterate over each element of argv and printf() to print each command line argument.

>argv[0] contains the name of the program itself, while argv[1] to argv[argc-1] contain the command-line arguments passed to the program.

**TASK 3**

>In this question we are to write a program that multiplies two numbers

>First I used an if statement to check if the numbers  of command-line arguments passed to the program is not equal to 3. If so, it prints an error message to the console and exits the program with a non-zero status code (1), indicating that the program did not execute successfully.

>I used the *atoi* function to convert the string to an int and store them in the num1 and num2 variables. Then i used printf() to print the result of the multiplication.

**TASK 4**

>In this question we are to write a program that adds positive numbers.

>First, I checked if there is at least one command-line argument provided. If there is not, it prints "0" to the console and returns a success status code (0).

>The for loop iterates over each command-line argument starting from the second one (since the first argument is the name of the program). It then checks whether each character within the current argument is a digit; if not, it prints an error message and exits the program with a non-zero status code (1). If the argument is a digit, it is converted to an integer using the atoi function and stored in the num variable. If the resulting integer is negative, it also prints an error message and exits the program. Otherwise, the integer is added to the sum variable.

**TASK 5**

>In this question, we are to write a program that prints the minimum number of coins to make change for an amount of money.

>The program first checks whether the argc is equal to 2, which means there should be only one command-line argument (the amount of change to make). If there are more or less than 2 arguments, the program prints an error message and returns 1.

>The program then converts the string value of the amount of change to an integer using the atoi() function. If the integer value of the amount of change is negative, the program prints 0 and returns 0.

>The program then enters a loop that iterates through each denomination in the coins array. For each denomination, the program calculates the maximum number of coins that can be used to make change by dividing the remaining amount of change by the denomination. This value is stored in coin_count.

>The coin_count is added to num_coins to keep track of the total number of coins used.
The program then subtracts the value of coin_count times the denomination from the remaining amount of change.
The loop continues until all denominations have been checked.
Finally, the program prints the total number of coins used to make change.
