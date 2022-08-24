// bubble sorting

#include<stdio.h>
void main()
{ 

  int temp,i,j,n,a[15];
  printf("enter n value:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)             // loop is used to get array elements
    scanf("%d",&a[i]);
    
  for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])       // comparing array elements and swapping in ascending order
          {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
           }
      }
      
    }
    
  printf("sorted list is:");
  for(i=0;i<n;i++)           
      printf("%d\n",a[i]);    // prints elements after swapping 
      
}
       
