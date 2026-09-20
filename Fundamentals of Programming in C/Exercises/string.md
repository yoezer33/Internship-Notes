### Exercise: Working with Strings

#### Question

Define `first_name` and `last_name` so that the program:
- Creates the name `"John Boe"`
- Checks the name using `strncmp()`
- Combines strings using `strncat()`

#### What I Learned

I learned that strings in C are character arrays ending with `\0`.

I also practiced:

- `sprintf()` → creates/formats a string
- `strncmp()` → compares two strings
- `strncat()` → joins one string to another
- `\0` → marks the end of a C string

#### Solution

```c
char first_name[] = "John";
char last_name[] = "Boe";