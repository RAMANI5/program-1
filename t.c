// program to flip a bit

#include<stdio.h>
void main()
{

  int n,pos;
  printf("enter a number:");
  scanf("%d",&n);
  printf("enter the bit position to flip:");
  scanf("%d",&pos);
  
  n=n^(1<<pos);                 //XOR operation is used to flip a bit
  printf("result:%d",n);
  
}
