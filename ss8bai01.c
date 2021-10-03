
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("Enter first nember :\n");
	scanf("%f", &x);
	printf("Enter number 2:\n");
	scanf("%f", &y);
	if (2000>=x || 3000<=x && 100<=y&&y<=150 )
	     printf("Satisfy");
	else 
	    printf("Unsatisfactory");
	    
	return 0;
}
