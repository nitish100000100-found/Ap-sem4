# Assignment 18: Score File Processing and Exception Handling

## Question

Create a utility class that reads an integer score from a text file, multiplies it by 10, and returns the result.

### Requirements

* Read score from a text file.
* Multiply the score by 10.
* Handle missing files.
* Handle invalid numeric data.
* Ensure cleanup code executes in all situations.
* Write automated tests using pytest.

## Program

**File:** `score_processor.py`

The program reads an integer value from a text file, multiplies it by 10, and returns the result.

Exception handling is implemented using:

* FileNotFoundError
* ValueError
* try-except-else-finally

The program also contains pytest test cases for successful and invalid scenarios.

## Sample Input File

**File:** `input.txt`

```text
7
```

## Expected Output

```text
Data processed successfully
File cleanup completed
70
```

## Execution

Run Program:

```bash
python3 score_processor.py
```

Run Tests:

```bash
pytest score_processor.py
```

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
