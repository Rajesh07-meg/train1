#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1,f=-1,r=-1,que[10];
void ste()
{
	int e;
	printf("enter the element into stack\n");
	scanf("%d",&e);
	top++;
	stack[top]=e;
}
void stde()
{
	if(f==-1&& r==-1)
	{
		f=0;r++;
	}
	que[r]=stack[top];
	top--;
	r++;
}
void dis()
{	int i;
	for(i=0;i<=top;i++)
	printf("%d",stack[i]);
	printf("-----que----\n");
	for(i=0;i<r;i++)
	printf("%d",que[i]);

}
int main()
{
int c;
while(1)
{scanf("%d",&c);
switch(c)
{
case 1:ste();
	break;
case 2:stde();
	break;
case 3:dis();
	break;
default:exit(0);
}
}
return 0;
}
