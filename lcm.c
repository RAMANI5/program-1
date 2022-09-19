#include <stdio.h>

int main() 
{
  int a,b,num1,num2,temp,gcd,lcm;     // declaring variables

  printf("Enter two integers\n");
  scanf("%d%d",&num1,&num2);          // getting input from the user

  a = num1;
  b = num2;

  while (b!= 0)                       // swapping variables
  {
    temp= b;
    b = a % b;
    a =temp;
  }

  gcd = a;
  lcm = (num1*num2)/gcd;

  printf("Greatest common divisor of %d and %d = %d\n",num1,num2,gcd);
  printf("Least common multiple of %d and %d = %d\n",num1,num2,lcm);

}


