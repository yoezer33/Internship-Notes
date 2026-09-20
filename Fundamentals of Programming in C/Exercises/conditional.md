## Exercise: Guess the Number

### Question

Construct an `if` statement inside the `guessNumber` function to check whether
the number `guess` is equal to 555.

- If `guess == 555`, print `"Correct. You guessed it!"`
- If `guess < 555`, print `"Your guess is too low."`
- If `guess > 555`, print `"Your guess is too high."`

### What I Learned

I learned how to use `if`, `else if`, and `else` to compare a value
against a specific number.

### Solution

```c
void guessNumber(int guess) {
    if (guess == 555) {
        printf("Correct. You guessed it!\n");
    } else if (guess < 555) {
        printf("Your guess is too low.\n");
    } else {
        printf("Your guess is too high.\n");
    }
}