##Reflection Questions:

1: topIndex holds the value 0 after creation. This makes the method
isEmpty() return true because there are no values stored in the array.

2: When one value is pushed into the first slot of the array, the value of topIndex
increases. If the order was swapped the values would not be in the correct index of the array.

3: Each method has O(1), they each use constant instructions and do not have anything in terms of n.

4: When push() is called while the stack is full, the push command is ignored. It gives
a message that tells you that the stack is full and would overflow.

5: When pop() or peek() are used while the stack is empty, They will not pop or push from the stack. 
They will say Stack Underflow for pop() and Stack is empty for peek(). Both methods will return -1.

6: The size of the array in Stack.h would need to change for this to work out. No other methods rely on a 
static number for the size. The time complexity for each method would still be O(1).

7: If this stack was built on a linked list instead of an array 
it would be harder to find the size and if the array is full or 
not but the other methods would be easier to complete this way.