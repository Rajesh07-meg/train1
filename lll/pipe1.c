#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
int p[2];
int a=1,b=2,c,d,h,e;
int pp;
pipe(p);
pp=fork();
if(pp==0)
{
sleep(1);
read(p[0],&c,sizeof(int));
sleep(1);
read(p[0],&d,sizeof(int));
e=c+d;
write(p[1],&e,sizeof(int));
sleep(1);
}
else 
{
write(p[1],&b,sizeof(int));
sleep(1);
write(p[1],&a,sizeof(int));
sleep(1);
sleep(1);
sleep(1);
read(p[0],&d,sizeof(int));
printf("%d",d);
}
return 0;
}
