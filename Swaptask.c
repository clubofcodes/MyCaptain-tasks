//swaping of 2 numbers
#include<stdio.h>
main() //code begins from here.
{
	int num1, num2; //declaring the variable. 
	printf(" Enter any two positive Integer Numbers: ");
	scanf("%d%d",&num1,&num2); //user-input numbers
	
	num1=num1+num2; //num1=first number
	num2=num1-num2; //num2=second number
	num1=num1-num2;
	//after swaping...
	printf(" Number 1 is=>%d \n \t and \n Number 2 is=>%d",num1,num2);
}

