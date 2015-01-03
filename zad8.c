#include <stdio.h>
int main(int argc, char** argv)
{
	int n=0;
	printf("podaj licczbe od 1 do 7\n");
	scanf("%d", &n);
	 switch (n)
{
case 1: printf("Poniedzialek\n");
break;
case 2: printf("Wtorek\n");
break;
case 3: printf("Sroda\n");
break;
case 4: printf("Czwartek\n");
break;
case 5: printf("Piatek\n");
break;
case 6: printf("Sobota\n");
break;
case 7: printf("Niedziela\n");
break;
default: printf("Nie ma takiego dnia\n");
break;
}
	
	return 0;
}