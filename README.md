# Assignment 6: Student Performance Analyzer

## Question

Develop a student performance analyzer in Java. Each student has:

* id (int)
* name (String)
* courses (List<String>)
* scores (Map<String, Integer>) where key = course and value = marks

### Requirements

1. Store students using appropriate collections.
2. Implement:

   * `List<Student> getTopNStudents(List<Student> students, int n)`
   * `Map<String, Double> getAverageScorePerCourse(List<Student> students)`
   * `Set<String> getAllUniqueCourses(List<Student> students)`

### Must Use

* ArrayList
* HashMap
* HashSet
* Java Streams
* Comparator
* Generics
* getOrDefault()

### Complexity Analysis

1. Time complexity of computing course averages.
2. Complexity of sorting top N students.

## Program

File: `StudentPerformanceAnalyzer.java`

The program manages student records using Java Collections Framework and Streams API. It performs student ranking, course-wise average calculation, unique course extraction, filtering of passed students, and empirical complexity analysis.

## Features

* Student data management using collections.
* Course-wise average score calculation.
* Top N student retrieval.
* Sorting using Comparator.
* Stream-based aggregation and filtering.
* Unique course extraction using HashSet.
* Missing score handling using `getOrDefault()`.
* Empirical complexity analysis.

## Compilation

```bash
javac StudentPerformanceAnalyzer.java
```

## Execution

```bash
java StudentPerformanceAnalyzer
```

## Complexity Analysis

### Computing Course Averages

* Time Complexity: **O(n · m + k · n)**
* Worst Case: **O(n² · m)**

Where:

* n = number of students
* m = average courses per student
* k = unique courses

### Sorting Top N Students

* Time Complexity: **O(n log n)**
* Additional Average Calculation Cost: **O(n · m)**

Overall:

```text
O(n · m + n log n)
```

If m is constant:

```text
O(n log n)
```

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
