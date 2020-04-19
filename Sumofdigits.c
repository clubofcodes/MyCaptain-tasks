#include <stdio.h>

int main() {
	
     int num;
     printf("The number for sum of digits.\n");
scanf("%d",&num);
     //function calling...
     int result = sod(num);//sod=sumofdigits.

    printf("Sum of digits for %d is %d\n", num, result); 

    return 0;
}
//recursive function 
int sod(int n){

    if(n==0){
        return 0;
    } 
    else{
        return(n%10+sod(n/10));
    }   
}
