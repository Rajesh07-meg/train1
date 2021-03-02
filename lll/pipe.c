#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
int pi[2],i,k=0;
int pnum[8];
pnum[0]=1;
pnum[1]=2;
int dum[8],j=0;
int retn;
retn=pipe(pi);
if(retn==-1)
{
printf("pipe is not created\n");
}

int pd=fork();

if(pd==0)
{
sleep(1);
for(i=0;i<2;i++)
{
read(pi[0],&dum[i],sizeof(dum[0]));
}
for(i=0;i<2;i++)
{
printf("%d\n",dum[i]);
j+=dum[i];
}
printf("%d",j);
}
else
{
for(i=0;i<2;i++)
{
write(pi[1],&pnum[i],sizeof(pnum[0]));
}

}
return 0;
}

