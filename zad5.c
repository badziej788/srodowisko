#include <stdio.h>

int main(int argc, char** argv)
{
	
	
	int a;
	int b;
 	printf("podaj liczbe a\n");
 	scanf("%i", &a);
 	printf("podaj liczbe b\n");
 	scanf("%i", &b);
 	if (a > 0 && b > 0)
	 {
 		printf("podana liczby sa dodatnie");
	 }
	 if (a > 0 && b < 0)
	  {
	  	printf("podane liczby maja rozne znaki\n");			 
	  }	
	else if (a < 0 && b < 0)
	 {
		 printf("liczby sa ujemne");	
	 }
	 else if (a < 0 && b > 0) 
	 {
	  printf("\nA i B maja rozne znaki\n"); 
	 }	 	
 	 
 	 
 	
 	 
	 return 0;
}