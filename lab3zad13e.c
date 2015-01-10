#include <stdio.h>
int main(int argc, char** argv)
{
int i=0;

int TAB[20];

for (i = 0; i < 20; ++i)
{
	TAB[i]=pow(2,i);
	printf("TAB[%d] = %d\n", i, TAB[i]);
}
return 0;
}
