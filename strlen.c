// program to find the string length

#include<stdio.h>
#include<stdlib.h>

void main()
{
   int i=0;
   char *str ; 
   str = (char *)malloc(sizeof(char));   // malloc() allocate the memory for char

   printf("enter the string:");         //getting input from the user
   scanf("%s",str);
   
   for(i=0;str[i]!='\0';i++);           // to find length of string
   printf("the length of string is:%d",i);

}
  
