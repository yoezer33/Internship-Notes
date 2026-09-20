### Exercise: Function with a Condition

#### Question

Write a `print_big()` function that checks whether a number is
greater than 10. If it is, print the number.

#### What I Learned

I learned how to:
- Declare a function before `main()`.
- Define the function after `main()`.
- Pass an array value to a function.
- Use an `if` statement inside a function.

#### Solution

```c
void print_big(int number) {
    if (number > 10) {
        printf("%d\n", number);
    }
}