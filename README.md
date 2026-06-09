# Assignment 10: Student System using Composition and Inheritance

## Question

Design a student system in Python with:

### Address Class

* street
* city
* zipCode

### Student Class

* name
* age
* Address
* course list

Requirements:

* Store age as a protected attribute
* Control age using @property
* Implement:

  * add_course()
  * display()

### ScholarshipStudent Class

* Add scholarshipAmount
* Override display()

### Concepts Demonstrated

* Composition (Student HAS-A Address)
* Data validation using @property
* Inheritance
* Method overriding using super()
* Mutable behavior of course lists

## Program

**File:** `student_system.py`

The program demonstrates:

* Composition using Address inside Student
* Validation using property decorators
* Course management using mutable lists
* Inheritance through ScholarshipStudent
* Method overriding with super()
* Exception handling for invalid age and scholarship values

## Compilation

Python is an interpreted language; no compilation is required.

## Execution

```bash
python3 student_system.py
```

## Expected Output

* Student details
* Scholarship student details
* Course list updates
* Validation error for invalid age

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
