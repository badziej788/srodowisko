#include <stdio.h>
int main(int argc, char** argv)
{
	int a=0;
	int x,y,z;
	x=0;
	y=0;
	z=0;
	for (a=0;a<5;a++){
	int u;
	int k = 1+rand() % 5; 
	srand(time(0));
	
	printf("podaj liczb? u\n ");
	scanf("%d",&u);	
	if ( u == k)
	{
		x=x+1;			//dla wygranej
	}
	else if (u+1==k)
	{
	   	y=y+1;			//blisko
	}
	else if (u-1==k)
	{
		y=y+1; // blisko
	}
	else
	{
		z=z+1;// pudlo
	}
	}
	printf("%d razy trafiles\n", x);
	printf("%d razy byles blisko\n", y);
	printf("%d razy nie trafiles\n", z);
	return 0;
}
