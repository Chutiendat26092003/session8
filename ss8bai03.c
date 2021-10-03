#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Enter first number a=");
	scanf("%f", &a);
	printf("\nEnter number 2 a=");
	scanf("%f", &b);
	printf("\nEnter number 3 a=");
	scanf("%f", &c);
	
	if (a>=b&&b>=c || a>=c&&c>=b) 
	   printf("a is the biggest");
    else if (b>=a&&a>=c || b>=c&&c>=a)
       printf("b is the biggest");
    else 
	   printf("c is the biggest");
		  
	    
	   
	 
	 
	return 0;
}
