# FILE HANDLING IN C PROGRAMMING

**TASK ZERO**

>This question is asking you to write a C function that reads a text file and prints it to the standard output.

>The function is named *read_textfile* and takes two parameters: a pointer to a constant character array named *filename* that represents the name of the file to be read, and a *size_t* type variable named *letters*, which specifies the maximum number of letters to be read and printed.

>The read_textfile function should return the actual number of letters that it could read and print from the file. If it fails to open or read the file, the function should return 0.

**TASK ONE**

>In this question we create a function that creates a file.

>The function name is *create_file* and it takes two arguments;*filename*, which is the name of the file to create and *text_content* which is the pointer to the string we want to write.
>
>If the file doesn't exist, we create using the *O_CREAT* flag, and it using *open()* function and set the permissions to *rw-------*, we also open it write only mode using the  *O_WRONLY* flag.
>
>If the file already exists, we truncate it using the *O_TRUNC*flag and we don't change the permissions.
>
>The function returns 1 on success and -1 on failure.

**TASK TWO**

