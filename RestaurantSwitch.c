#include <stdio.h>
#define Pasta 179
#define Burger 129
#define French_Fries 99
#define Pizza 239
#define Sandwich 149
int main() {

	int ch;//ch=choice for the user!!
    double bill = 0; //for making reciept!!

    printf("Welcome to RJ Restaurant!\n");
    printf("May I take your order? \n\n");

    //do-while is to take order again!
    do{
	printf("Menu: \n\n");
	printf("1. Burger of RS 129   \n");
	printf("2. French_Fries of RS 99\n");
	printf("3. Pizza of RS 239\n");
	printf("4. Sandwich of RS 149\n");
	printf("5. Pasta of RS 179\n");
	printf("6. Exit! ByE-ByE...\n\n");
	
	printf("Enter the number of food..\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
	    case 1:printf("Food item-Burger\nPrice-RS 129\n");
				bill+=Burger;
				break;
	    case 2:printf("Food item-French Fries\nPrice-RS 99\n");
				bill+=French_Fries;
				break;
	    case 3:printf("Food item-Pizza\nPrice-RS 239\n");
				bill+=Pizza;
				break;
	    case 4:printf("Food item-Sandwich\nPrice-RS 149\n");
				bill+=Sandwich;
				break;
	    case 5:printf("Food item-Pasta\nPrice-RS 179\n");
				bill+=Pasta;
				break;
	    case 6:printf("Have a nice day!!\n");
	    		break;
	    default:printf("Made a wrong choice!!\n");
		}
	printf("Collect Your Bill And Come back again.\n");
printf("Your order is Rs.%.2lf \n\n", bill);
	}while (ch !=6);

    
    return 0;
}
