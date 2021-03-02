#include<stdio.h>
#include<stdlib.h>
int main()
{
int ar[50][50],r,c,i,j;
printf("enter the rows no. \n");
scanf("%d",&r);
printf("enter the no. columns\n");
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&ar[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",ar[i][j]);
}
printf("\n");

}
return 0;
}
