# Assignment 13: Dynamic String Buffer in C

## Question

In C, managing strings is a common source of buffer overflows and memory leaks. Implement a Dynamic String Buffer that automatically grows as needed.

### Requirements

1. Create a `StringBuffer` struct containing:

   * `char *data`
   * `size_t length`
   * `size_t capacity`

2. Implement:

   * `sb_init(size_t initial_capacity)`
   * `sb_append(StringBuffer *sb, const char *str)`
   * `sb_free(StringBuffer *sb)`

3. Use dynamic memory allocation with `malloc`.

4. Handle allocation failures safely.

5. Use `realloc` to grow the buffer when required.

6. Ensure safe use of `realloc` by storing the returned pointer in a temporary variable.

7. Demonstrate the buffer growing at least twice.

8. Free all allocated memory before program termination.

## Program

**File:** `string_buffer.c`

The program implements a dynamic string buffer that automatically expands when additional space is required. Memory allocation, reallocation, and deallocation are handled safely to prevent buffer overflows and memory leaks.

## Concepts Used

* Structures
* Dynamic Memory Allocation
* malloc()
* realloc()
* free()
* String Handling
* Memory Leak Prevention

## Compilation

```bash
gcc string_buffer.c -o output
```

## Execution

```bash
./output
```

## Expected Output

* Initial buffer capacity
* Buffer growth messages
* Final concatenated string
* Memory cleanup confirmation

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
