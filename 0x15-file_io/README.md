# FILE HANDLING IN C PROGRAMMING

**TASK ZERO**

>This question is asking you to write a C function that reads a text file and prints it to the standard output.

>The function is named *read_textfile* and takes two parameters: a pointer to a constant character array named *filename* that represents the name of the file to be read, and a *size_t* type variable named *letters*, which specifies the maximum number of letters to be read and printed.

>The read_textfile function should return the actual number of letters that it could read and print from the file. If it fails to open or read the file, the function should return 0.

**TASK ONE**

>In this question we create a function that creates a file.

>The function name is *create_file* and it takes two arguments;*filename*, which is the name of the file to create and *text_content* which is the pointer to the string we want to write.

>If the file doesn't exist, we create using the *O_CREAT* flag, and it using *open()* function and set the permissions to *rw-------*, we also open it write only mode using the  *O_WRONLY* flag.

>If the file already exists, we truncate it using the *O_TRUNC*flag and we don't change the permissions.

>The function returns 1 on success and -1 on failure.

**TASK TWO**

>In this question we write a function that appends text at the end of the file, if the file doesn't exist, don't create a new one, if the string is null, do not add anything to the file. REturn 1 on success and -1 on failure.

>The function is called *append_text_to_file* and takes two arguments; *filename* which is the name of the file and *text_content* which a pointer to the string we want to append.

>First we check if the filename is NULL, if it's not, we use the file descriptor to  open the file using the open() function,in write only mode and append mode. Check if the opening was successful.

>use strlen to check(count) the length of the string, use write() function to write at the end  of the string.

>check if writing was successful and then close the file.

**TASK THREE**

>In this question we copy the contents of one file to another file. The program takes two command line arguments; the first the is the file to be copied, and the second argument is the destination file where the contents of the first file will be copied.

>If the number of arguments is more, an error message is returned to stderr. The program uses open(), read(), write() and close() functions.

>The program has three helper functions; error_98(), error_99(), and error_100(). These functions take the return values of a system call, a buffer and the name of the file being processed as arguments. If the return value is less than 0,an error message is printed to stderr, the buffer is freed, and the program exists with a non-zero status code.

>The program opens the source file for reading and checks for errors. Then, it opens the destination file for writing, truncating if it already exists, and creates it if it doesn't exists. It also checks for errors.

>The program then enters a loop where it reads data from source file and writes it to the destination file. The loop continues until read() returns zero indcating there's no more data to read. It also checks for errors.

>When the loop is finished, the program closes both files usingthe close() function and checks for errors. Then it frees the buffer using free() and exits with a zero status code.


