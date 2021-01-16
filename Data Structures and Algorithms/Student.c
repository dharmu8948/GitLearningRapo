#include<stdio.h>
#include<conio.h>
struct Student
{
	int rollno;
	char sname[50];
	char dept[20];
	char course[20];
	char college[70];
	char add[50];
};
int main()
{
	struct Student S;
	int n,i;
	printf("Enter The Number of Student Details : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the rollno of Student %d: ",i);
		scanf("%d\n",&S.rollno);
		printf("Enter The Name of Student %d: ",i);
		scanf("%s\n",&S.sname);
		printf("Enter the Department of Student %d: ",i);
		scanf("%s\n",&S.dept);
		printf("Enter The Course Name of Student %d: ",i);
		scanf("%s\n",&S.course);
		printf("Enter the College Name of Student %d: ",i);
		scanf("%s\n",&S.college);
		printf("Enter The Address of Student %d: ",i);
		scanf("%s\n",&S.add);
		printf("\n");
	}
	printf("Details of Students is : \n");
	for(i=1;i<=n;i++)
	{
		printf("Details of Student %d\n ",i);
		printf("Roll Number is %d\n",S.rollno);
		printf("Name is %s\n",S.sname);
		printf("Department is %s\n",S.dept);
		printf("Course is %s\n",S.course);
		printf("College Name %s\n",S.college);
		printf("Address is %s",S.add);
		
	}
}
