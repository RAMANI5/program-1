// Program to convert strint to integer [implement atoi()]

#include <stdio.h>

int atoi(char* str)
{
       int res = 0;     // Iterate through all characters of input string and update result
       for (int i=0;str[i]!='\0'; i++) 
	         res =res*10 + str[i]-'0';
       return res;
}
int main()
{
	char str[] = "12345";
	int val = atoi(str);    //function call
	printf("%d\n",val);
}

