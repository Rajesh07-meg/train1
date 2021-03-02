#include<stdio.h>
#include<stdlib.h>
int top=-1;
struct node
{
int data;
struct node *nex;
};
struct node* head=NULL;
int stack[20],sta[20];
void in()
{int da;
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
void st(){
	int c;
	struct node* p;
	p=head;
	printf("1.first alt\n");
	scanf("%d",&c);
	switch(c){
	case 1:while(p!=NULL){
		top++;
		stack[top]=p->data;
		p=p->nex;
		p=p->nex;	
		}
		break;
	case 2:while(default:exit(0);
	}
}

void dis()
{int i;
struct node* p1;
p1=head;
while(p1!=NULL)
{
printf("%d\t",p1->data);
p1=p1->nex;
}
printf("\n------stack-----\n");
for(i=0;i<=top;i++)
printf("%d\t",stack[i]);
}

int main()
{int c;
while(1)
{
scanf("%d",&c);
switch(c)
{
case 1:in();
	break;
case 2:st();
	break;
case 3:dis();
	break;
default:exit(0);
}
}
return 0;
}
