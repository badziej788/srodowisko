#include <stdio.h>
int max(int A,int B);
int main()
{
	int A, B;
	printf("wieksza jest %d\n", max(A,B));
	return 0;
}

int max(int A,int B){
	
	printf("podaj dwie liczby całkowite\n");
	scanf("%d %d", &A, &B);
		
		if(A>   B) 
		{
		return A;
	   	}	
		return B;
}
