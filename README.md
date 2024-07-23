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

4. Testing and Explanation

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
 * Return: 0
 */
int main(void)
{
    c = 'A';
    printf("The character is: %c\n", c);
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
 * Return: 0
 */
int main(void)
{
	string = "Hello world !";
	_printf("%s", string);
	return (0);
}

stdout: Hello world !
```

here is an example which prints a percent:

```c
#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
    int valeur_actuelle = 45;
    int valeur_totale = 100;
    
    float pourcentage = ((float)valeur_actuelle / valeur_totale) * 100;
    
    printf("Le pourcentage est de %.2f%%\n", pourcentage);
    
    return 0;
}
```
