#include <stdio.h>
int main(int argc, char** argv)
{
int d=0;
int a=1;
int suma=0;
int b=0;
printf("podaj liczbe n \n");
scanf("%d",&b);
while(a <=b){
		suma=suma+a	;
	++a;
		printf("%d\n",suma);
	}
	
printf("\n\n");
a=0;
suma=0;
suma = suma+a;
	for(a=0;a<=b;++a){
		suma = suma+a;
		printf("%d\n",suma);
		}
		printf("wzorem\n\n");
suma =0;
d = b*b+b*1	;
suma= d/2;
printf("%d\n", suma);
		
		
return 0;}
