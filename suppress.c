//program to suppress a character from a given string

#include<stdio.h>
#include<string.h>

void removechar(char * str,char chartoremove)
{
    int i,j;
    int len=strlen(str);              //library function is used to find the string length
    for(i=0; i<len; i++)
      {
        if(str[i]==chartoremove)
          {
            for(j=i;j<len;j++)       //iterating the loop
              {
                str[j]=str[j+1];
               }
                 len--;
                 i--;
         }
      }
}

void main()
{
  char str[25],ch,c;
  int i,j,len;
  printf("enter the string:");
  gets(str);
  printf("enter the character you want to remove: ");    
  scanf("%c",&ch);                            //inputs character from the user to remove
  removechar(str,ch);                         //function call
  printf("String after removing '%c':%s",ch,str);                                   
	
 }      

