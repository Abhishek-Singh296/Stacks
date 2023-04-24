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

