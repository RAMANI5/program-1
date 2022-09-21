//program to find transpose matrix


#include <stdio.h>

void main()
{
   int rows,columns,i,j,matrix[10][10],transpose[10][10];
   printf("Enter rows and columns :\n");
   scanf("%d%d",&rows,&columns);         //getting required number of rows and columns from user
   
   printf("Enter elements of the matrix\n");
   for (i=0;i<rows;i++)                  // to print elements of the matrix
      for (j =0;j<columns;j++)
         scanf("%d", &matrix[i][j]);
         
   for (i=0;i<rows;i++)                  
      for (j=0;j<columns;j++)
         transpose[j][i] = matrix[i][j];
         
   printf("Transpose matrix:\n");
   for (i =0;i<columns;i++)             //loop is used to print the transpose matrix
   {
      for (j =0;j<rows;j++)
      
         printf("%d\t", transpose[i][j]);
         printf("\n");
   }
   
 }
 
 
 
