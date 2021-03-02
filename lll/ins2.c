#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0;
struct node
{
int id;
char name[5];
struct node *nex;
};
FILE *f;
void re()
{
	struct node* new=(struct node*)malloc(sizeof(struct node*));
	fseek(f,(sizeof(struct node*)*i),SEEK_SET);
	fread(new,sizeof(new),1,f);
	printf("%d",new->id);
	printf("%s",new->name);
i++;
}
int main()
{	int c;
	f=fopen("r1","rb");
while(1)
{
	scanf("%d",&c);
	switch(c)
	{
	case 1:re();
		break;
	default:exit(0);
	}
}
return 0;
}
