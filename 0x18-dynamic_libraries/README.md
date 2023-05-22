# 0x18-dynamic_libraries
## 0. A library is not a luxury but one of the necessities of life

### Create the dynamic library libdynamic.so containing all the functions listed below:
     * int _putchar(char c);
     * int _islower(int c);
     * int _isalpha(int c);
     * int _abs(int n);
     * int _isupper(int c);
     * int _isdigit(int c);
     * int _strlen(char *s);
     * void _puts(char *s);
     * char *_strcpy(char *dest, char *src);
     * int _atoi(char *s);
     * char *_strcat(char *dest, char *src);
     * char *_strncat(char *dest, char *src, int n);
     * char *_strncpy(char *dest, char *src, int n);
     * int _strcmp(char *s1, char *s2);
     * char *_memset(char *s, char b, unsigned int n);
     * char *_memcpy(char *dest, char *src, unsigned int n);
     * char *_strchr(char *s, char c);
     * unsigned int _strspn(char *s, char *accept);
     * char *_strpbrk(char *s, char *accept);
     * char *_strstr(char *haystack, char *needle);

### To compile;
     * To create a shared library, create all the .c files that conatin the above listed functions, and use the following
     * command to compile:
            * gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o libdynamic.so
     * don't forget to create the header file 

## 1.  Without libraries what have we? We have no past and no future
     * Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

## 100. Let's call C functions from Python
     * Create a dynamic library that contains C functions that can be called from Python. 
     * Create a .c file containing all the listed functions.
     * Compile using:
        * gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o 100-operations.so 

## 101. Code injection: Win the Giga Millions! 
     * I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. 
     * If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot
     * Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
        * /* Giga Millions program
            * Players may pick six numbers from two separate pools of numbers:
            * - five different numbers from 1 to 75 and
            * - one number from 1 to 15
            * You win the jackpot by matching all six winning numbers in a drawing.
            * Your chances to win the jackpot is 1 in 258,890,850
            *
            * usage: ./gm n1 n2 n3 n4 n5 bonus
        * You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
        * The system is an Linux Ubuntu 16.04
        * The server has internet access
        * Our mole will be only able to run two commands from a shell script, without being detected by MSS
        * Your shell script should be maximum 3 lines long. 
	* You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
        * Our mole has only the authorization to upload one file on the server. It will be your shell script
        * Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
        * Our mole will run your shell script from the same directory containing the program gm, 
	* exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
        * MSS will use the same terminal and session than our mole
        * Before running the gm program, MSS always check the content of the directory
        * MSS always exit after running the program gm
        * TL;DR; This is what is going to happen
     * Create a .c file containing the code, in my case, I created a file named libwinner.c and compliled it using:
         * gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o libwinner.so
	 * push the file to your github
     * Create the 101-make_me_win.sh and write a script 
     * The script should contain commands to download the library file and set the `LD_PRELOAD` environment variable.
     * Set the `LD_PRELOAD` environment variable: Use the `export` command to set the `LD_PRELOAD` environment variable 
     * to the path of the downloaded library file. 
     * This ensures that the library file is preloaded when executing the Giga Millions program.
     * Execute the shell script:  make the file executable and run the code.
