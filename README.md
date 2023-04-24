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
#include <stdio.h>
#include <stdlib.h>
void push(); //Declare the Push Function
void pop(); //Declare the Pop Function
void disp(); //Declare the display function

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int stk[10]; //MAX Array_Size=10
int top=-1;
int i; //array index
int main() 
{
	int x; //Choice of user
	int op; // Operation Choice
	printf("Welcome to Stacks \n");
	printf("1.Push:Press 1 for Push Operation \n");
	printf("2.Pop:Press 2 for Pop Operation \n");
	printf("3.Display:Press 3 for displaying the stack elements \n");
	//do{
	
	{
	scanf("%d", &x);
	int cont;
	if(x==1)
	{
	 do	
	 {
	 push();
	 printf("Do you wish to push again(Type 0 or 1)? \n");
	 scanf("%d", &cont);
	 }
	 while(cont==1); 
	}		
	printf("Do you wish to perform any opeartion again(Type 0 or 1)? \n");
	scanf("%d", &op);
	
	if(x==2)
	{
		pop();
	}
	if(x==3)
	{
		disp();
	}
	//else
	//{
	//	printf("Please enter valid option");
	//}
	}
	return 0;
	//}while(op==1);
}

void push()
{
	int a; //Variable for User data
	if(top==9) //(top==MAX-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		printf("Enter the value to be pushed in:");
		scanf("%d", &a);
		top++;
		stk[top]=a;
		for(i=top;i>=0;i--)
		{
			printf("%d \n", stk[i]);
		}
	}
}
void pop()
{
	//int b;
	if(top!=-1)
	{
		printf("Stack Underflow");
	}
	else
	{
	//	b=stk[top];
		top--;
		
	}
}
void disp()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d", stk[i]);
		}
	}
}	
```
