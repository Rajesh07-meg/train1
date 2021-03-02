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
void de()
{
int se;
printf("enter the id to search \n");
scanf("%d",&se);
f=fopen("r1","r+b");
while(i<5)
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
fseek(f,(sizeof(struct node)*i),SEEK_SET);
fread(new,sizeof(new),1,f);
if(new->id==se)
{
printf("%d",new->id);
printf("%d",new->name);
new->id=0;
strcpy(new->name," ");
fwrite(new,sizeof(new),1,f);
fclose(f);
}
i++;
}
}
int main()
{
int c;
while(1)
{
scanf("%d",&c);
switch(c)
{
case 1:de();
	break;
default:exit(0);
}
}
return 0;
}
