#include <stdio.h>
int main(int argc, char** argv)
{
	int a;
	printf("podaj liczbe\n");
	scanf("%d",&a);
	if (a>0){
		printf("%d jest dodatnie", a);
		
	}
	if (a<0){
		printf("%d jest ujemne", a);
	}
	
	
		return 0;
}
