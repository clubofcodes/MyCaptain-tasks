#include<stdio.h>
int main()
{
	int marks; //declaring the variable
	
	printf("Enter Student Marks:");
	scanf("%d",&marks); //user input 
	
	if(marks>100) //if user try to enter more than 100 marks
	{
		printf("\nMarks Cannot be More than 100");
	}
	else if(marks>=85 && marks<=100) // && = 'and' Operator
	{
		printf("\nGrade A");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("\nGrade B");
	}
	else if(marks>=55 && marks<=69)
	{
		printf("\nGrade C");
	}
	else if(marks>=40 && marks<=54)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nGrade E");
	}
	return 0;
}
