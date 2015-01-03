#include <stdio.h>
int main(int argc, char** argv)
{
	float a = 1.62;
	float b = 3.14;
	float c = 2.72;
	float g = (a + b)*(a+b);
	float d = c * g - a*a*a + b-c;
	printf("a b c to : %f, %f, %f\n", a, b, c);
 	printf("wynik to %f\n\n\n\n\n", d);
 	printf("sam je podaj! \n");
	printf("podaj liczbe a b i c\n");
	a=0;
	b=0;
	c=0;
	scanf("%f %f %f", &a, &b ,&c);
	
	g = (a + b)*(a+b);
	d = c * g - a*a*a + b-c;
	printf("%f\n", d);
	
	return 0;
}