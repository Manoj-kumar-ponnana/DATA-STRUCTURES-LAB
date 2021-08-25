#include<stdio.h>
int top=-1;

void push(int max,int stack[*]);
int pop(int max,int stack[*]);
void peek(int max,int stack[*]);
void display(int max,int stack[*]);
void isEmpty(int max,int stack[*]);
void isfull(int max,int stack[*]);

void main()
{
	int val,option,max;
	printf("enter the size of the stack :");
	scanf("%d",&max);
	int stack[max];
	printf("\nenter the elements of stack:");
	for(i=0;i<=max;i++)
	{
	scanf("%d",stack[i]);
	}
	do
	{
		printf("\n*****MAIN MENU*****");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peek");
		printf("\n4.DISPLAY");
		printf("\n5.to check the stack is Empty");
		printf("\n6.to check the stack is full");
		printf("\n7.EXIT");
		printf("\n enter your option");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				push(max,stack);
				break;
			case 2:
				pop(max,stack);
				break;
			case 3:
				peek(max,stack);
				break;
			case 4:
				display(max,stack);
				break;
			case 5:
				isEmpty(max,stack);
				break;
			case 6:
				isfull(max,stack);
				break;
			default:
				printf("enter a valid option!!!");
		}
	}while(option!=7);
}

void push(int max,int stack[max])
{
	int val;
	printf("\n enter the number to push into the stack :");
	scanf("%d",&val);
	if(top==-1)
		printf("\n stack is nunderflow");
	else
	{
		top++;
		stack[top]=val;
	}
}

int pop(int max,int stack[max])
{
	int val;
	if(top==-1)
	{
	
		printf("\n stack is underflow");
		return -1;
	}
	else
	{
		val=stack[top];
		top--;
		return val;
	}
}

void peek(int max,int stack[max])
{
	if(top==-1)
		printf("\n stack is empty");
	else
	{
		printf("\n the value stored at the top is %d",stack[top]);
	}
}
void isEmpty(int max,int stack[max])
{
	if(top==-1)
		printf("\n stack is empty");
	else
	{
		printf("\n the stack is not empty");
	}
}
void isfull(int max,int stack[max])
{
	if(top==max-1)
		printf("\n stack is full");
	else
	{
		printf("\n the stack is not full");
	}
}
void display(int max,int stack[max])
{
	int i;
	if(top==-1)
		printf("\n the stack is empty");
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("\t%d",stack[i]);
		}
	}
}

