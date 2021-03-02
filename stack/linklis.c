#include<stdio.h>
struct node
{
	int data;
	struct node *nex;
};
struct node *head=NULL;
void insert()
{
int da;
printf("enter the first node data\n");
scanf("%d",&da);
if(head==NULL)
{
struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=da;
	newnode->nex=NULL;
	head=newnode;
}
else 
{
struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	struct node* ptr;
	ptr=head;
	head=newnode;
	head->nex=ptr;
	head->data=da;
}
}

void dis()
{
struct node* ptr1;
	ptr1=head;
while(ptr1!=NULL)
{
printf("%d\n",ptr1->data);
	ptr1=ptr1->nex;
}
}

void endnode()
{
int da;
printf("enter the data  at end \n");
scanf("%d",&da);
struct node* newnode1=(struct node*)malloc(sizeof(struct node*));
	newnode1->data=da;
	newnode1->nex=NULL;
	struct node* pt;
	pt=head;
while(pt->nex!=NULL)
{
	pt=pt->nex;
}
	pt->nex=newnode1;
}

void center()
{
int da1,p,i=0;
printf("enter the the value to the position node\n");
scanf("%d",&da1);
printf("enter the position \n");
scanf("%d",&p);
struct node* newnode2=(struct node*)malloc(sizeof(struct node*));
	newnode2->data=da1;
	struct node* pt=NULL;
	struct node* pl=NULL;
	pt=head;
	pl=head;
while(i<p)
{
	pt=pt->nex;
	pl=pl->nex;
	++i;
}
	pl=pl->nex;
	newnode2->nex=pl;
	pt->nex=newnode2;
	pt=NULL;
	pl=NULL;
}

void della()
{
if(head==NULL)
{
	printf("no node is created\n");
}
	struct node* pt;
	struct node* pl;
	pt=head;
while(pt->nex!=NULL)
{
if(pt->nex!=NULL)
{
	pl=pt;
}
	pt=pt->nex;
}
	pl->nex=NULL;
	free(pt);
}

void delp()
{
int p,i=0;
printf("enter the position to delete\n");
scanf("%d",&p);
if(head==NULL)
{
printf("node is emplty\n");
}
struct node* po;
struct node* po1;
po=head;
po1=head;
while(i<p)
{
po=po->nex;
po1=po1->nex;
++i;
}
po1=po1->nex;
po->nex=po1->nex;
}


void search()
{
int s;
printf("enter the data to search\n");
scanf("%d",&s);
struct node* se;
se=head;
while(se->data!=s)
{
se=se->nex;
}
printf("data found %d\n",se->data);
}


int main()
{
int da,c;
while(1)
{
printf("enter the choice\n");
scanf("%d",&c);
switch(c)
{
case 1:insert();
	break;
case 2:
	endnode();
	break;
case 3:printf("display\n");
	dis();
	break;
case 4:printf("position\n");
	center();
	break;
case 5:printf("to delete last node\n");
	della();
	break;
case 6:delp();
	break;
case 7:search();
	break;
default:printf("exit");
	return 0;
	break;
}
}
	return 0;
}














