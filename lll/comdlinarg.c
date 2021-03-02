#include<stdio.h>
main(int argc,char *argv[])
{
	FILE *f1,*f2;
	char c[10];
	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"w");
	c[10]=fgetc(f1);
	while(c[10]!=EOF)
	{
		fputc(c[10],f2);
		c[10]=fgetc(f1);
	}
printf("file copied");
fclose(f1);
fclose(f2);
}

