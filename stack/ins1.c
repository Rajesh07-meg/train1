#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int id;
char name[5];
struct node *nex;
};
FILE *f;
struct node* head=NULL;
void in()
{
int id;
char nam[5];
printf("entre the id \n");
scanf("%d",&id);
printf("enter the name of employee\n");
scanf("%s",nam);
if(head==NULL)
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
new->id=id;
strcpy(new->name,nam);
new->nex=NULL;
fwrite(new,sizeof(new),1,f);
head=new;
}
else
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
new->id=id;
strcpy(new->name,nam);
new->nex=NULL;
fwrite(new,sizeof(new),1,f);
struct node* p;
p=head;
while(p->nex!=NULL)
{
p=p->nex;
}
p->nex=new;
}
}
void dis()
{
struct node* pt;
pt=head;
while(pt!=NULL)
{
printf("%d",pt->id);
printf("%s",pt->name);
pt=pt->nex;
}
}
int main()
{
f=fopen("r1","wb");

int c;
while(1)
{
scanf("%d",&c);
switch(c)
{
case 1:in();
	break;
case 2:fclose(f);
	dis();
	break;
default:exit(0);
}
}

return 0;
}
