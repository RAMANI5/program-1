// program to reverse a string

#include<stdio.h>
void main()
{

 int i,j,l=0,temp;
 char a[50];
 printf("enter the string\n");
 scanf("%s",a);
 
 for(i=0;a[i]!='\0';i++)        // loop is used to find the length of the string
   {
     l++;
   }
    
 for(i=0;i<l/2;i++)            // swapping the variables
    {
       temp=a[i];
       a[i]=a[l-i-1];
       a[l-i-1]=temp;
     }
 printf("%s",a);
  
}
 
   
  

