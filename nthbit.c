// program to verify whether n-th bit of a given number is set or not 


#include <stdio.h>

void BitSet(int number,int n)
{
	if (number & 1<<(n-1))
		printf("Bit is SET");
	else
		printf("Bit is NOT SET");
}

void main()
{
	int number,n=1;
	printf("enter the number to verify: ");  //input a number from the user
	scanf("%d",&number);
	
	BitSet(number,n);                       //function call
}


