//program to find min/max in a given array

#include<stdio.h>
void main()
{

  int i,a[10]={10,25,67,95,33,89,76,90,56,47};
  int small,large;
  small=large=a[0];
  
  for(i=0;i<10;i++)
   {
     if(a[i]<small)       //if the value is less assign it to small
        small=a[i];
        
     if(a[i]>large)      //if the value is high asssign it to large
        large=a[i];
    }
  printf("smallest=%d  largest=%d\n",small,large);
  
}
