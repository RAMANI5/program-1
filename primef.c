// program to find prime factors of a given number

#include<stdio.h>
void main()

{
  int i,j,num,count;
  printf("enter number to find its prime factors:");  //getting input from the user
  scanf("%d",&num);
  printf("prime factors of %d are:",num);
  for(count=2;num>1;count++)
    {
      while(num%count==0)
        {
          printf("%d ",count);
          num=num/count;
        }
    
    }
 
  }
     
     

