#include<stdio.h>
struct node
{
int data;
struct node *nex;
};
struct node* head=NULL;
int r=0;
void push()
{
int da;
printf("enter the data value\n");
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
r++;
}
void pop()
{
if(r==0)
{
printf("que is empty\n");
exit(0);
}
struct node* f;
f=head;
head=head->nex;
free(f);
r--;
}

void dis()
{
struct node* d;
d=head;
while(d!=NULL)
{
printf("\n%d\n",d->data);
d=d->nex;
}
}
int main()
{int c;
while(1)
{
printf("size=%d",r);
printf("1.push\t 2.pop\n");
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
	printf("exit\n");
	break;
}
}
return 0;
}
