//program to merge two arrays using pointers

#include<stdio.h>
void main()
{
   int n,m,i,j,A[10],B[10],*C[10];
   printf("Enter size of A Array:\n");
   scanf("%d",&n);
   
   printf("Enter elements for A array:\n");
   for (i=0;i<n;i++)
      {
         scanf("%d",(A+i));
         *(C+i)=A+i;
      } 
   
   printf("Enter size of B Array:\n");
   scanf("%d",&m);
   
   printf("Enter elements for B array:\n");
   for (j=0;j<m;j++)
      {
         scanf("%d",(B+j));
         *(C+i+j)=B+j;
      }
   printf("merged array:");   
   for (i=0;i<(n+m);i++)
      {
         printf("%d ",*(C[i]));
      }

}
