#include <stdio.h>
int main(int argc, char** argv)
{
int i=0;
int TAB[20];
int u;
int k;
	srand(time(0));
for (i = 0; i < 20; ++i)
{	k = 1+rand() % 20; 
	TAB[i]=k;
	printf("TAB[%d] = %d\n", i, TAB[i]);
}

return 0;
}
