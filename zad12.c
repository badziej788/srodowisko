#include <stdio.h>
int main(int argc, char** argv)
{
	int n=0;
	printf("podaj liczbe\n");
	scanf("%d",&n);
	if (n!=0){
	for (n;n!=0;){
	printf("podaj liczbe\n");
	scanf("%d",&n);
	}
	}
	printf("w koncu zero");
		return 0;
}