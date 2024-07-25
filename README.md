# **PROJECT C - printf**

### **AUTHORS**

Jeremy Sousa - Achraf Jeddi

### **DESCRIPTION OF THE PROJECT**

This project aims to re-create the printf functions.

### **TABLES OF CONTENTS**

1. Command of Compilation

2. Requirements

3. Examples of use of the printf function
  - Print a character
  - Print a string
  - Print a percent

4. Explanation

5. Flowchart

### **1. Command of Compilation**

To compile the program, you will need:
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
### **2. Requirements**

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called main.h

Don’t forget to push your header file

All your header files should be include guarded

Note that we will not provide the _putchar function for this project

### **3. Examples of use of the printf function**

here is an example that prints a character:

```c
#include "main.h"
/**
 * main - main function
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	c = 'A';
	_printf("The character is: %c\n", c);
	return (0);
}

stdout: The character is: A
```

here is an example which prints a character string:

```c
#include "main.h"
/**
 * main - main function
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	string = "Hello world !";
	_printf("%s", string);
	return (0);
}

stdout: Hello world !
```

Here is an example which prints a percent:

```c
#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int current_value = 45;
	int total_value = 100;

	float percentage = ((float)current_value / total_value) * 100;

	_printf("Percentage display: %.2f%%\n", percentage);

	return (0);
}

stdout: Percentage display: 45.00%
```

### **4. Explanation**

This code defines a function called _printf that prints a string with special format handling. Here's a simple explanation of how it works:

The _printf function takes a format string and a variable number of arguments. The format string can include format specifiers (like %c, %s, %d) that indicate how the additional arguments should be formatted and displayed.

Argument Initialization: The function starts by initializing a variable argument list to access the additional data passed to the function.

Specifier Handling: It then processes each character in the format string. If it encounters a %, it checks what type of format is specified (such as c for a character, s for a string, or d for an integer). Depending on the type, it calls the appropriate function to display the corresponding argument.

Character Display: If the character following % is not a known specifier, it prints % followed by the next character. If it is not a %, it simply prints the character as it is.

Returning the Number of Characters: Finally, the function returns the total number of characters printed.

In summary, _printf allows printing strings with formatted arguments based on defined specifiers while counting and returning the total number of printed characters.

### **5. Flowchart**

![375](https://github.com/user-attachments/assets/cdf05e8c-8f39-414f-835c-b902cb2783c3)
