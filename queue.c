//implement queue in c

#include<stdio.h>
#include<stdlib.h>
#define size 10
int main()
{
    int queue[size],front=0,rear=0,i,x=size,choice;
    
    printf("operations performed by queue");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    
    while(1)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:                     //adds elements to the queue
        
            if(rear==x)
                printf("Queue is Full\n");
            else
              {
                printf("Enter element to be inserted to the queue:");
                scanf("%d",&queue[rear++]);
              }
            break;
        case 2:                 //deletes the first element inserted to the queue
        
            if(front==rear)
              {
                printf("Queue is empty\n");
              }
            else
              {
                printf("Deleted Element is %d",queue[front++]);
                x++;
              }
            break;
        case 3:                //displays the elements present in the queue
        
            printf("Queue Elements are: ");
            if(front==rear)
                printf("Queue is Empty\n");
            else
              {
                for(i=front; i<rear; i++)
                  {
                    printf("%d",queue[i]);
                    printf("\n");
                  }
               }
                break;
            case 4:
            
                exit(0);
            default:
            
                printf("Wrong Choice:please see the options");
            }
        }
    }
  




