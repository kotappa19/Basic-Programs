#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int stack[100],top=-1,i=0,op1,op2;
char postfix[100],sym;
void postfix_eval();
void push(int);
int pop();
void tower_of_hanoi(int, char, char, char);
void main()
{
	int ch,n,i;
	while(1)
	{
		printf("1-postfix evaluation:\n 2-tower of hanoi\n 3-exit\n");
		printf("enter the choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the postfix expression:\n");
				scanf("%s",postfix);
				printf("%s\n",postfix);
				postfix_eval();
				printf("the result is %d\n",stack[top]);
				break;
			case 2:printf("enter the number of disks:\n");
				scanf("%d",&n);
				printf("the sequence of moves involved in tower of hanoi are:\n");
				tower_of_hanoi(n,'A','B','C');
				break;
			case 3:exit(0);
		}
	}
	
}
void postfix_eval()
{
	
	while(postfix[i]!='\0')
	{
		sym=postfix[i];
		if(isdigit(sym))
		{
			push(sym-'0');
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(sym)
			{
				case '+':push(op1+op2);
					break;
				case '-':push(op1-op2);
					break;
				case '*':push(op1*op2);
					break;
				case '/':push(op1/op2);
					break;
				case '%':push(op1%op2);
					break;
				case '^':push(pow(op1,op2));
					break;
			}
		}i++;
	}
}
void push(int ele)
{
	stack[++top]=ele;
}
int pop()
{
	return stack[top--];
}
void tower_of_hanoi(int n,char pegA, char pegB, char pegC)
{
	int ele;
	if(n==1)
	{
		printf("\nmove disk 1 from peg %c to peg %c\n",pegA,pegB);
	}
	else
	{
		tower_of_hanoi(n-1, pegA, pegC, pegB);
		printf("\nmove disk %d from peg %c to peg %c\n",n,pegA,pegB);
		tower_of_hanoi(n-1,pegC,pegB,pegA);
	}
}
		


