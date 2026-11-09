#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("data.txt","w");
	fprintf(fp,"\nlearning a computer language with our trainer is really interesting\n");
	fclose(fp);
	fp=fopen("data.txt","a");
	fprintf(fp,"\nI am comfortable with sir's teaching\n");
	fclose(fp);
	fp=fopen("data.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
	printf("%c",ch);
	}
	fclose(fp);
	return 0;
}