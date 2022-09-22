//implement stack in c

#include<stdio.h>
#include<stdlib.h>
#define Size 10
 
int Top=-1,array[Size];
void Push();
void Pop();
void show();
 
int main()
{
	int choice;
	while(1)	
	{
		printf("Operations performed by Stack\n");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
			        break;
			case 2: Pop();
			        break;
			case 3: show();
				break;
			case 4: exit(0);
			
			default: printf("Invalid choice");
	         }
	}
}
 
void Push()                        //adds elements to the top of stack
    {
	int x;
	if(Top==Size-1)
	     {
		printf("Overflow\n");
	     }
	else
	     {
		printf("Enter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		array[Top]=x;
	     }
     }
 
void Pop()                       //removes top most element from stack
     {
	if(Top==-1)
	     {
		printf("Underflow");
	     }
	else
	    {
		printf("Popped element:%d\n",array[Top]);
		Top=Top-1;
	    }
      }
 
void show()                      //displays the elements present in the stack
     { 
	if(Top==-1)
	    {
		printf("Underflow");
	    }
	else
	    {
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",array[i]);
	     }
      }

