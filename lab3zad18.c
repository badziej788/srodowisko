#include <stdio.h>
int star(int NN);
int main()
{
int N;	
printf("wprowadz liczbe gwiazdek: ");		
scanf("%d",&N);	
star(N);

return 0;
}


int star(int NN)	
{

int i;	

for (i=1; i<=NN;i++)
{
printf("*");
}
return 0;
}
