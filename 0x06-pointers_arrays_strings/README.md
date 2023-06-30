The following tasks involve pointers, arrays, and strings:

Task 0: Write a function that concatenates two strings. The function should append the source string to the destination string, overwrite the terminating null byte at the end of the destination string, add a terminating null byte, and return a pointer to the resulting string. The function prototype is provided as: `char *_strcat(char *dest, char *src);`. Note that the standard library provides a similar function called `strcat`.

Task 1: Write a function that concatenates two strings. The function should be similar to Task 0, except that it should use at most `n` bytes from the source string (where `n` is an integer parameter) and the source string does not need to be null-terminated if it contains `n` or more bytes. The function should return a pointer to the resulting string. The function prototype is provided as: `char *_strncat(char *dest, char *src, int n);`. Note that the standard library provides a similar function called `strncat`.

Task 2: Write a function that copies a string. The function should work exactly like the standard library function `strncpy`. The function should have the prototype: `char *_strncpy(char *dest, char *src, int n);`.

Task 3: Write a function that compares two strings. The function should work exactly like the standard library function `strcmp`. The function should have the prototype: `int _strcmp(char *s1, char *s2);`.

Task 4: Write a function that reverses the content of an array of integers. The function should have the prototype: `void reverse_array(int *a, int n);`, where `n` is the number of elements in the array.

Task 5: Write a function that changes all lowercase letters of a string to uppercase. The function should have the prototype: `char *string_toupper(char *);`.

Task 6: Write a function that capitalizes all words of a string. The function should have the prototype: `char *cap_string(char *);`. The words in the string are separated by space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.

Task 7: Write a function that encodes a string into 1337. The function should replace the letters 'a' and 'A' with '4', 'e' and 'E' with '3', 'o' and 'O' with '0', 't' and 'T' with '7', and 'l' and 'L' with '1'. The function should have the prototype: `char *leet(char *);`. Note that the function should use only one `if` statement and two loops, and should not use `switch` or any ternary operation.

Task 8: Write a function that encodes a string using ROT13. The function should have the prototype: `char *rot13(char *);`. Note that the function should use only one `if` statement and two loops, and should not use `switch` or any ternary operation.

Task 9: Write a function that prints an integer using the `_putchar` function. The function should have the prototype: `void print_number(int n);`. Note that the function should not use `long`, arrays, or pointers, and should not hard-code any special values.

Task 10: Add one line of code to a given program so that it prints `a[2] = 98` followed by a new line. The new line of code must be written at line 19, before the semicolon, and should use only one statement. The variable `a` cannot be used in the new line of code, and the variable `p` cannot be modified.

Task 11: Write a function that adds two positive numbers. The function should have the prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`. The function should return a pointer to the result, which should be stored in the buffer `r`. The function should assume that `n1` and `n2` are positive numbers and that they contain only digits. The buffer `r` has a size of `size_r`. If the result cannot be stored in `r`, the function should return `0`.

Task 12: Write a function that prints the content of a buffer. The function should have the prototype: `void print_buffer(char *b, int size);`. The function should print the content of `size` bytes of the buffer pointed to by `b`. The output should print 10 bytes per line, starting with the position of the first byte of the line in hexadecimal (8 chars), followed by the hexadecimal content (2 chars) of the buffer, and then the content ofthe buffer. If the byte is a printable character, the corresponding letter should be printed, otherwise a dot should be printed. Each line should end with a new line character. If `size` is 0 or less, the output should consist of a new line only. The function is allowed to use the standard library.
