#include<stdio.h>
int n=4,n1,c;
top=-1;
int stack[4];
int main()
{
 int i=0;
while(i<3)
{
printf("enter the choice\n");
scanf("%d",&c);
switch(c)
{
case 1:push();
	break;
case 2:printf("enter the number of elements to delete \t current=%d\n",top);
	scanf("%d",&n1);
	 pop(n1);
	break;
case 3:	pop1();
	break;
case 4:display();
	break;
default:printf("exit\n");
	break;
}
i++;
}
return 0;
}

void push()
{int x,i;
if(top==n-1)
{
 printf("stack overflow\n");
return ;
}
for(i=0;i<n;i++)
{
printf("enter the the value to push\n");
scanf("%d",&x);
stack[top]=x;
top++;
}
}

int pop(int n1)
{int i;
 if(top==-1)
 {
	printf("stack is under flow\n");
	return 0;
 }
for(i=0;i<n1;i++)
{
 stack[--top];
}
}

int display()
{
 int i=top;
 for(;i>=-1;--i)
 {
	printf("%d\n",stack[i]);
 }
}

int pop1()
{
int e;
printf("enter the index to delete\n");
scanf("%d",&e);
stack[e]=0;
}














