#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emplo
{
char ph[10];
char id[10];
char name[10];
};
struct emplo* add=NULL;

void ent()
{int i;
char ss[10];
struct emplo* em=(struct emplo*)malloc(sizeof(struct emplo*)*3);
add=em;
for(i=0;i<3;i++)
{
scanf("%s",ss);
strcpy((em+i)->ph,ss);
scanf("%s",ss);
strcpy((em+i)->id,ss);
scanf("%s",ss);
strcpy((em+i)->name,ss);
}

}
int main()
{
while(1)
{int c;
printf("enter the choice\n");
scanf("%d",&c);
switch(c)
{
case 1:ent();
	break;
default:exit(0);
}
}
return 0;
}
