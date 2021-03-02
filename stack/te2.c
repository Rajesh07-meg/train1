#include<stdio.h>
FILE *f;
main()
{
char a[10];
f=fopen("e","r");
fseek(f,0,SEEK_SET);
fgets(a,sizeof(a),f);
printf("%s",a);
fclose(f);
}
