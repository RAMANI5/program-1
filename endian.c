// program to find little endian or big endian


#include <stdio.h>
int main()
{
   unsigned int i = 1;               // assigning unsigned integer value
   char *c = (char*)&i;
   printf("enter the character: ");  // getting input from the user
   scanf("%ch",&*c);
   
   if (*c)                          // to check little endian or big endian
       printf("Little endian");
   else
       printf("Big endian");
   
  
}
