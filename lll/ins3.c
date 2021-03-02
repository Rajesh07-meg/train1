#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=0;
struct node
{
int id;
char name[5];
struct node *nex;
};
FILE *f;
void se()
{
int id;
printf("enter the employee id to search\n");
scanf("%d",&id);
while(1)
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
fseek(f,(sizeof(struct node*)*i),SEEK_SET);
fread(new,sizeof(new),1,f);
if(new->id==id)
{
printf("employee found\n");
printf("%d",new->id);
printf("%s",new->name);
exit(0);
}
i++;
}
}
int main()
{int c;
f=fopen("r1","rb");
while(1)
{
printf("1. to search\n");
scanf("%d",&c);
switch(c)
{
case 1:se();
	break;
default:exit(0);
}
}
return 0;
}
