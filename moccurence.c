//Program to remove multiple occurrence of number in a list

#include <stdio.h>

int main()
{
	int array[12] = {1,20,11,3,1,56,14,1,7,111,01,1},size=12,value=1,i;
	
	                               
	for (i=0;i<size;i++) 
	{
           if (array[i]!=value)  // if array element is equal to not equal to the 
                                                       //value print the element 
           {
               printf("%d ",array[i]);
           }
	}
}

