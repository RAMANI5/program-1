//program to find the frequency of character in a string

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char str[25],ch;
    int count=0,i;
    printf("Enter a string: ");         //input a string from the user
    gets(str);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);                  //input a character from the user to check it's occurence

    for (i=0;str[i]!='\0';i++) 
    {
        if (ch==str[i])
            count++;
    }

    printf("Frequency of %c=%d",ch,count);
    
}


