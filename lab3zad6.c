#include <stdio.h>
#include <stdlib.h>

int main()
{	int u;
	int k = 1+rand() % 5; 
	srand(time(0));
	
	printf("podaj liczb? u\n ");
	u=0;
	scanf("%d",&u);
	k;
	
	if ( u == k)
	{
		printf("brawo !\n");
	}
	else if (u+1==k)
	{
	printf("blisko\n");
	}
		else if (u-1==k)
		{
		printf("blisko\n");
		}
			else
			{
				printf("pudlo\n");
			}

	return 0;
}
