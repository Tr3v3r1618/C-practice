#include<stdio.h>
#include<conio.h>

int main(){
	//add, sub, mult, div, rem
	float var1, var2;
	var1 = 12;
	var2 = 5;
	 
	
	printf("The addition of %.2f and %.2f is: %.2f \n", var1, var2, var1+var2);
	printf("The substract of %.2f and %.2f is: %.2f \n", var1, var2, var1-var2);
	printf("The multiplication of %.2f and %.2f is: %.2f \n", var1, var2, var1*var2);
	printf("The division of %.2f and %.2f is: %.2f \n", var1, var2, var1/var2);
	printf("The remainder of %.2f and %.2f is: %d \n", var1, var2, ((int)var1 % (int)var2));
	
	
	return 0;

}