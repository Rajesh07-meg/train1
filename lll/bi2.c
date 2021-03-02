#include<stdio.h>
FILE *f;
main()
{
char a[10];
f=fopen("e","wb");
printf("enter the somm\n");
scanf("%s",a);
fwrite(a,sizeof(a),1,f);
fclose(f);
}
