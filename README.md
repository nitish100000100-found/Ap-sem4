# Assignment 8: Course Enrollment Dashboard

## Question

Develop a course enrollment dashboard in ReactJS.

Each student:

```javascript
{
  id: number,
  name: string,
  enrolledCourses: Set<string>,
  gpa: number
}
```

### Requirements

1. Maintain students in state.

2. Implement:

   * Add new student
   * Remove student by ID
   * Display students sorted by GPA (descending)
   * Display all unique courses across students
   * Filter students enrolled in a specific course

3. Use:

   * useState
   * Map internally for ID to Student mapping
   * Set for course uniqueness
   * map, filter and reduce
   * Spread operator for updates
   * Convert Set to Array before rendering
   * Do not mutate state directly

4. Compute time complexity of filtering students by course.

## Program

**File:** `App.jsx`

The application maintains student enrollment data using React state and JavaScript collections.

### Features

* Add new student records
* Remove students by ID
* Sort students by GPA (highest first)
* Display all unique courses
* Filter students by selected course
* Complexity visualization panel
* Uses Map and Set internally
* Immutable state updates

## Complexity Analysis

### Filtering Students by Course

Filtering is performed using:

```javascript
students.filter(student =>
  student.enrolledCourses.has(course)
)
```

For n students:

```text
Time Complexity: O(n)
```

Each student is checked once and Set lookup is O(1) on average.

### Space Complexity

```text
O(n)
```

for storing filtered results.

## Running the Application

Install dependencies:

```bash
npm install
```

Start development server:

```bash
npm run dev
```

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
