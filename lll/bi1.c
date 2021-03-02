#include<stdio.h>
FILE *f;
main()
{
char r[10];
f=fopen("r.txt","rb");
fseek(f,0,SEEK_SET);
fread(r,sizeof(r),1,f);
printf("%s",r);
fclose(f);
}
