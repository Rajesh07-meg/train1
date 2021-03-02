#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=0,j=0,k=0;
struct node
{
int id;
int name[5];
struct node* nex;
};
FILE *f;
void seup()
{
int se,nid;
char nam[5];
printf("enter the id to search\n");
scanf("%d",&se);
while(1)
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
fseek(f,(sizeof(struct node*)*i),SEEK_SET);
fread(new,sizeof(new),1,f);
++j;
if(new->id==se)
{
k=j-2;;
fseek(f,0,SEEK_SET);
fseek(f,(sizeof(struct node*)*k),SEEK_SET);
fread(new,sizeof(new),1,f);
printf("%d",new->id);
printf("%s",new->name);
printf("enter the id \n");
scanf("%d",&nid);
new->id=nid;
printf("enter the name\n");
scanf("%s",&nam);
strcpy(new->name,nam);
fwrite(new,sizeof(new),1,f);
fclose(f);
exit(0);
}
i++;
}
}
void dis()
{
f=fopen("r1","rb");
int i=0;
while(i<5)
{
struct node* new=(struct node*)malloc(sizeof(struct node*));
fseek(f,(sizeof(struct node*)*i),SEEK_SET);
fread(new,sizeof(new),1,f);
printf("%d",new->id);
printf("%s",new->name);
i++;
}

fclose(f);
}

int main()
{
f=fopen("r1","r+b");
int c;
while(1)
{
scanf("%d",&c);
switch(c)
{
case 1:seup();
	break;
case 2:dis();
	break;
default:exit(0);
}
}
return 0;
}
