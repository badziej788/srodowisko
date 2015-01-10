#include <stdio.h>
int main(int argc, char** argv)
{
int i=0;

int TAB[20];

for (i = 1; i <= 20; i++)
{
	TAB[i]=i;
	printf("TAB[%d] = %d\n", i, TAB[i]);
}
return 0;
}
