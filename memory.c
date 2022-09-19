#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int *memory,n,i;
    printf("Enter number of elements to be entered in the array:");
    scanf("%d",&n);
    i=(n*(sizeof(int)));
    printf("memory size allocated:%d",i);
}
 
    
