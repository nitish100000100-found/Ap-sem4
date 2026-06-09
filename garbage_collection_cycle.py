import sys
import gc


class Node:
    def __init__(self, name):
        self.name = name
        self.link = None

    def __del__(self):
        print(self.name, "destroyed")


# Create Node A and Node B
A = Node("A")
B = Node("B")


# Create cycle
A.link = B
B.link = A


# Check reference count
print("Reference count of A:", sys.getrefcount(A))
print("Reference count of B:", sys.getrefcount(B))


# Disable automatic garbage collection
gc.disable()


# Store object ids for investigation
idA = id(A)
idB = id(B)


# Delete variables
del A
del B

print("\nA and B deleted")


# Investigation:
# Check if objects still exist in memory
found = False

for obj in gc.get_objects():
    if id(obj) == idA or id(obj) == idB:
        found = True

if found:
    print("Objects still exist in memory because of the cycle")


# Cleanup
print("\nRunning Garbage Collector...")

collected = gc.collect()

print("Unreachable objects collected:", collected)


# Enable garbage collector again
gc.enable()
