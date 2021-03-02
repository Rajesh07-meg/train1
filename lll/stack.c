#include<stdio.h>
struct node
{
int data;
struct node *nex;
};
int pi=0;
struct node* head=NULL;
void push()
{
	int da;
	printf("enter the data to push\n");
	scanf("%d",&da);
	if(head==NULL)
	{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=da;
	newnode->nex=head;
	head=newnode;
	}
	else
	{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=da;
	newnode->nex=NULL;
	struct node* p;
	p=head;
	while(p->nex!=NULL)
	{
	p=p->nex;
	}
	p->nex=newnode;
	}
pi=pi+1;
}
void pop()
{
	struct node* p1;
	p1=head;
	struct node* p2;
	while(p1->nex!=NULL)
{
	if(p1->nex!=NULL)
	p2=p1;

	p1=p1->nex;
}
	p2->nex=NULL;
	free(p1);
pi=pi-1;
}

void dis()
{
struct node* d;
d=head;
while(d!= NULL)
{
printf("%d\n",d->data);
d=d->nex;
}
}

int main()
{
int c;
while(1)
{
printf(" 1.push\t 2.pop\n");
printf("enter the choice\n");
scanf("%d",&c);
switch(c)
{
	case 1:push();
		printf("%d",pi);
		break;
	case 2:pop();
		printf("%d",pi);
		break;
	case 3:dis();
		break;
	default:exit(0);
		printf("exit\n");
		break;
}
}
return 0;
}



















