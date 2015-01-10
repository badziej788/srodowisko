#include <stdio.h>

int max(int A,int B);
int min(int A, int B);
double praw(int A, int B);

int main()
{
int A, B;
printf("podaj dwie liczby całkowite\n");
scanf("%d %d", &A, &B);
printf("wartosc W-M/W+M %f \n", praw(A,B));
return 0;
}

int max(int A,int B){

if(A>B) 
{
return A;
} 
return B;
}
int min(int A,int B){

if(B>A) 
{
return A;
} 
return B;
}

double praw(int A, int B)
{
double W, M;
W = (double)max(A,B);
M = (double)min(A,B);
return (W-M)/(W+M);
}
