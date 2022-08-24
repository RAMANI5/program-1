//program to print pascal triangle

#include<stdio.h>
void main()
{
   int i,j,rows,c=1,space;
   printf("enter rows: ");
   scanf("%d",&rows);        //getting rows from the user
   for(i=0;i<rows;i++)
     {
       for(space=1;space<=rows-i;space++)
           printf(" ");
       for(j=0;j<=i;j++)
        {
            if(j==0 || i==j)
                   c=1;
            else
                  c=c*(i-j+1)/j;
            printf(" %d ",c);
                 
         }
    printf("\n");
         
      }   
   
}
           
   
            
          
