#include<stdio.h>
extern unsigned_floatconvert;
struct student
{ 
 char name[20];
 int rollno;
 float mark;
 char city[20];
 char dream[20];
};
void read(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name\n");
		scanf("%s",s[i].name);
		printf("\nEnter the rollno\n");
		scanf("%d",&s[i].rollno);
		printf("\nEnter the marks\n");
		scanf("%f",&s[i].mark);
		printf("\nEnter the city\n");
		scanf("%s",s[i].city);
		printf("\nEnter the dream\n");
		scanf("%s",s[i].dream);
	}
}
void display(struct student s[],int n)
{
	int i;
	printf("\n*****STUDENT DETAILS*****\n");
	for(i=0;i<n;i++)
	{
		printf("student %d\n",i+1);
		printf("student name:%s\n",s[i].name);
		printf("student rollno:%d\n",s[i].rollno);
		printf("student mark:%f\n",s[i].mark);
		printf("student city:%s\n",s[i].city);
		printf("student dream:%d\n",s[i].dream);
	}
	
}
int main()
{
	struct student s[10];
	read(s,10);
	display(s,10);
	return 0;
}
