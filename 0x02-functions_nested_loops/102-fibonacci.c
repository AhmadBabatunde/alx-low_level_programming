#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int fibonacci(int i)
{
	if (i==0){
		return 0;
	}
	if (i==1){
		return (1);
	}
	return fibonacci(i-1) + fibonacci(i-2);
}
int main()
{
	for(int i=1; i<=50; i++)
	printf("%d ,", fibonacci(i));
}
