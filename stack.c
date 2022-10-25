#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 100
int stack[MAX],top=-1;
void push()
{
	int value;
	printf("Enter value to be pushed in stack\t");
	scanf("%d",&value);
	if(top==MAX-1)
	{
		printf("overflow condition");

	}
	else
	{
		top=top+1;
		stack[top]=value;
	}
}
void pop()
{
	int delet;
	if(top==-1)
	printf("stack is empty");
	else
	{
		delet=stack[top];
		top=top-1;
		printf("element deleted is %d \n",delet);
	}
}
void peak()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void display()
{int i;
	if( top== -1)
	printf("stack is empty");
	else{
		printf("elements are:\t");
		for(i=top;i>=0;i--)
		printf("%d\t",stack[i]);
	}
	printf("\n");
}
 void main()
{
int ch;
printf("Enter choice :\n\t1-push\n\t2-pop\n\t3-peak\n\t4-display\n\t5-Exit\n");
do
{
 printf("choice:");
	scanf("%d",&ch)	;
	switch(ch)
	{
		case 1:
		       push();
		       break;
		case 2:
		       pop();
		       break;
		case 3:
			   peak();
			   break;
        case 4:
				display();
				break;
		case 5:exit(0);
        default:
                printf("invalid choice");
				}
			}while(1);
			getch();
	}
