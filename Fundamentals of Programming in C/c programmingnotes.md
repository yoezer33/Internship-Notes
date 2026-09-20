
## 1. Hello, World!
I learned that C is a compiled language — write code, a compiler (like GCC) turns it into an executable, then  run that. Every program starts in `main()`, and `printf` (from `stdio.h`) is used to print text.

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
- `return 0;` means the program ran successfully.
- Every line of code ends with `;`.

---

## 2. Variables and Types
I studied the basic data types in C — `int`, `char`, `float`, `double`, `bool` — and how each one has a range of values it can hold. I also learned about arrays, which store multiple values of the same type using an index (starting from 0).

```c
int bar = 1;
int numbers[5];
numbers[0] = 10;
```
This helped me understand how memory is used to store simple values and groups of values.

---

## 3. Conditions
I learned how to make decisions in code using `if`, `else if`, and `else`. Also learned the comparison operators (`==`, `!=`, `<`, `>`) and logical operators (`&&`, `||`, `!`).

```c
if (foo < bar) {
    printf("foo is smaller");
} else {
    printf("foo is bigger or equal");
}
```
This is useful for writing programs that behave differently depending on input.

---

## 4. Strings
I learned that strings in C are just arrays of characters, ending with a special null character (`\0`). Strings can be defined as a pointer (`const char *`) or as a local array (`char name[]`).

```c
char name[] = "John";
printf("%s\n", name);
```
Also learned basic string functions: `strlen()` (length), `strncmp()` (compare), `strncat()` (join).

---

## 5. Loops
I studied `for` and `while` loops, and how `break`/`continue` control them.

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```
This helped me understand how to repeat code and work through arrays.

---

## 6. Functions
I learned that functions group code together, can take inputs (parameters), and return one value (or none, using `void`).

```c
int add(int a, int b) {
    return a + b;
}
```
Functions need to be declared before they're used, either earlier in the file or with a prototype.

---

## 7. Static
I studied the `static` keyword. A static variable keeps its value between function calls instead of resetting each time.

```c
int counter() {
    static int count = 0;
    count++;
    return count;
}
```
A static function is only usable inside the file it's written in.

---

## 8. Pointers
I studied the basic concept of pointers and how a pointer stores a memory address. I focused on understanding the address-of operator `&` and the dereferencing operator `*`. This helped me understand why pointers are important in C and how they'll be used later in data structures.

```c
int var = 10;
int *ptr = &var;
printf("%d", *ptr); // 10
```
I also learned about NULL, void, wild, and dangling pointers, and why it's important to always initialize a pointer before using it.



---

## 9. Function Pointers
I learned that a pointer can also store the address of a function, so the function can be called indirectly.

```c
int add(int a, int b) { return a + b; }
int (*fptr)(int, int) = add;
printf("%d", fptr(10, 5)); // 15
```
This is useful for callback functions, where you pass one function into another to decide what runs.



---

## 10. Enums
I learned that `enum` is used to give names to a set of related numbers, making code easier to read.

```c
enum direction { EAST, NORTH, WEST, SOUTH };
enum direction dir = NORTH; // dir = 1
```
By default the first value is 0, and each one after increases by 1.



---

## 11. Structure Padding
I learned that the compiler can add extra unused bytes (padding) inside a struct so that each member is stored at an efficient memory address. This means a struct's actual size can be bigger than just adding up its members.

```c
struct A { char c; short s; }; // looks like 3 bytes, but is really 4
```
Ordering members from largest to smallest can reduce this extra padding.



---

## 12. Memory Layout of a C Program
I learned that a running C program's memory is split into parts: the code (text) segment, the data segment (global/static variables), the heap (dynamic memory), and the stack (local variables and function calls).

This helped me understand where different types of variables actually "live" while a program runs.

---

## 13. Dynamic Memory Allocation
I studied how to allocate memory at runtime using `malloc()`, `calloc()`, and `realloc()`, and how to release it using `free()`.

```c
int *ptr = malloc(5 * sizeof(int));
if (ptr != NULL) {
    ptr[0] = 1;
}
free(ptr);
```
I learned it's important to always check if allocation failed (`ptr == NULL`) and to free memory once done with it.

---

## 14. Unions
I learned that a union lets different variables share the same memory space, so only one member can hold a valid value at a time. The size of a union equals the size of its largest member.

```c
union Student {
    int rollNo;
    float height;
};
```
---

## 15. Memory Leaks
I learned that a memory leak happens when memory is allocated with `malloc()`/`calloc()` but never freed. This wastes memory and can slow down or crash long-running programs.

```c
int *ptr = malloc(sizeof(int));
// forgetting free(ptr) here causes a memory leak
```
Best practice: always match every allocation with a `free()`, and set the pointer to `NULL` afterward.
