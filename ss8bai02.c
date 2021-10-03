#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char  ch;
	printf("Enter character:");
	scanf("%c", &ch);
	
	switch (ch)
	{
		case 'A':
		case 'a': 
		   printf("\nAda");
		   break;
		case 'B':
		case 'b': 
		   printf("\nBasic");
	       break;
	    case 'C':
		case 'c':
		   printf("\nCobol");
		   break; 
		case 'D':
		case 'd':
		   printf("\ndBASE III ");
		   break;
		case 'F':
		case 'f ':
		   printf("\nFortran");
		   break;
		   
		     
	    default:
	       printf("\nMismatched");
	       break;
    
	        
	 } 

	return 0;
}
