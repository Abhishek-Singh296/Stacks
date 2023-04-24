# Stacks
A stack is a linear data structure in which the insertion of a new element and removal of an existing element takes place at the same end represented as the top of the stack.To implement the stack, it is required to maintain the pointer to the top of the stack, which is the last element to be inserted because we can access the elements only on the top of the stack.

__LIFO( Last In First Out ):__

This strategy states that the element that is inserted last will come out first. You can take a pile of plates kept on top of each other as a real-life example. The plate which we put last is on the top and since we remove the plate that is at the top, we can say that the plate that was put last comes out first.

![Stack-660x566](https://user-images.githubusercontent.com/113619312/234077102-8ad9a1a0-8c71-4517-944e-acf16cd39a78.png)

---

__Basic Operations on Stack__

In order to make manipulations in a stack, there are certain operations provided to us.
- __push()__ to insert an element into the stack
- __pop()__ to remove an element from the stack

## __Push__
Adds an item to the stack. If the stack is full, then it is said to be an Overflow condition.

Algorithm for push:
```
begin
 if stack is full
    return
 endif
else  
 increment top
 stack[top] assign value
end else
end procedure
```


## __Pop__
Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.

Algorithm for pop:
```
begin
 if stack is empty
    return
 endif
else
 store value of stack[top]
 decrement top
 return value
end else
end procedure
```

---

## __Code__
```
