#include<stdio.h>
#include<stdlib.h>

struct node 
{
int data;
struct node* nex;
};
struct node* head=NULL;

void push()
{
int da;

printf("enter the data\n");
scanf("%d",&da);
if(head==NULL)
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
new->data=da;
new->nex=NULL;
head=new;
}
else
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
new->data=da;
new->nex=NULL;
struct node* pt;
pt=head;
while(pt->nex!=NULL)
{
pt=pt->nex;
}
pt->nex=new;
}
}

void pop()
{
struct node *p1,*p2;
p1=head;
p2=head;
while(p1->nex!=NULL)
{
if(p1->nex!=NULL)
{
p2=p1;
}
p1=p1->nex;
}
p2->nex=NULL;
free(p1);
}
void dis()
{
struct node* pw;
pw=head;
while(pw!=NULL)
{
printf("%d\n",pw->data);

pw=pw->nex;
}
}
int main()
{
int c;
while(1)
{
printf("enter the choice 1.push\t 2.pop\n");
scanf("%d",&c);
switch(c)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:dis();
	break;
default:exit(0);
}
}
return 0;
}

