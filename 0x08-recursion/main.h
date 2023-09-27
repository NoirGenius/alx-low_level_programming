#ifndef MAIN_H
#define MAIN_H

/* Prototype for _putchar function */
int _putchar(char c);

/* Task 0: Prototype for _puts_recursion function */
void _puts_recursion(char *s);

/* Task 1: Prototype for _print_rev_recursion function */
void _print_rev_recursion(char *s);

/* Task 2: Prototype for _strlen_recursion function */
int _strlen_recursion(char *s);

/* Task 3: Prototype for factorial function */
int factorial(int n);

/* Task 4: Prototype for _pow_recursion function */
int _pow_recursion(int x, int y);

/* Task 5: Prototype for _sqrt_recursion function */
int _sqrt_recursion(int n);
int sqrt_helper(int n, int i);

/* Task 6: Prototype for is_prime_number function */
int is_prime_number(int n);
int is_prime_helper(int n, int i);

#endif /* MAIN_H */
