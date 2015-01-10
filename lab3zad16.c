#include <stdio.h>
int liczba();
int main(int argc, char** argv)
{
	liczba();

	return 0;
}
int liczba()
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
