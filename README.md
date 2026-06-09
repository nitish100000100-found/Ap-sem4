# Assignment 7: Activity Log Analyzer

## Question

Develop an activity log analyzer in Python.

You are given a list of activity records:

```python
{
    "user": str,
    "action": str,
    "duration": float
}
```

Implement:

```python
total_time_per_user(logs)
most_active_users(logs, k)
unique_actions(logs)
```

Requirements:

* Use dict, set and list
* Use comprehensions where appropriate
* Use sorted() with key
* Avoid explicit loops where possible
* Use typing annotations
* Use defaultdict optionally
* Use reduce() to compute total activity time

Perform complexity analysis:

1. Time complexity for computing Top-K users
2. Space complexity of storing intermediate results

## Program

**File:** `activity_log_analyzer.py`

The program analyzes student activity logs and computes:

* Total activity time per user
* Top-K most active users
* Unique actions performed
* Empirical time complexity analysis
* Empirical space complexity analysis
* Log-log regression based Big-O estimation

## Concepts Used

* Python Lists
* Dictionaries
* Sets
* defaultdict
* reduce()
* heapq
* Type Hints
* Comprehensions
* Complexity Benchmarking

## Execution

```bash
python3 activity_log_analyzer.py
```

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
