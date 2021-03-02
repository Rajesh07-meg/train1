#include<stdio.h>
struct emp
{
char name[10];
};
int main()
{
struct emp em;
printf("enter the name \n");
scanf("%s",&em.name);
printf("%s",em.name);
printf("typeof(em)");
}
