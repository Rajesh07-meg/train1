#include<stdio.h>
#include<stdlib.h>
FILE *f;
main()
{

f=fopen("r.txt","w+");
fseek(f,0,SEEK_SET);
fputs("fsfsf",f);
fclose(f);
}
