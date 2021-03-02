#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *nex;
};
struct node* head=NULL;
int i=0;
int j=0,n;
struct node* a=(struct node*)malloc(sizeof(a) * 5);

void ins()
{
int da;
printf("enter the data to node\n");
scanf("%d",&da);
	if(head==NULL)
	{
	struct node* new=(struct node*)malloc(sizeof(struct node*));
	new->data=da;
	new->nex=NULL;
	*(a+1)=new;
	}
	else
	{
	struct node* new=(struct node*)malloc(sizeof(struct node*));
	new->data;
	new->nex=NULL;
	struct node* p;
	p=*(a+1);
	while(p->nex!=NULL)
	{
	p=p->nex;
	}
	p->nex=new;
	}
	j++;
}

void dis()
{
	struct node* p;
	
	p=*(a+1);
	printf("%u",*(a+1));
	while(p!=NULL)
	{
	printf("%d\n",p->data);
	p=p->nex;
	}
	}	
}
int main()
{
int c;
while(1)
{
printf("1.insert \n");
scanf("%d",&c);

switch(c)
{
case 1:ins();
	break;
case 2:dis();
	break;
default:exit(0);
}
}
return 0;
}
