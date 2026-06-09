# Assignment 14: Garbage Collection of Circular References in Python

## Question

Create a scenario where objects are "dead" but still have a reference count higher than zero, then force the Garbage Collector to clean them up.

### Requirements

1. Create a Node class with a name and a link attribute.
2. Create a cycle between two Node objects.
3. Use `sys.getrefcount()` to inspect reference counts.
4. Delete all direct references using `del`.
5. Use the `gc` module to investigate whether the objects still exist.
6. Force garbage collection using `gc.collect()`.
7. Display the number of unreachable objects collected.

## Program

**File:** `garbage_collection_cycle.py`

The program demonstrates how circular references can keep objects alive even after all direct references are removed. Python's Garbage Collector is then used to detect and clean up these unreachable objects.

## Concepts Used

* Reference Counting
* Circular References
* Garbage Collection
* sys Module
* gc Module
* Object Lifecycle
* Memory Management

## Execution

```bash
python3 garbage_collection_cycle.py
```

## Expected Output

* Reference counts of Node A and Node B
* Confirmation that variables were deleted
* Verification that objects still exist because of the cycle
* Number of unreachable objects collected by the Garbage Collector
* Destructor messages showing object cleanup

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
