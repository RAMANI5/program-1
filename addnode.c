// program to add a node at given position

#include<stdio.h>
#include<stdlib.h>

struct student
 {
    int studentid;
    struct student *next;
 };
void main()
 {
    int choice,i,data,position,id;
    struct student *head,*temp,*new=NULL;
    while(1)                                //infinite loop
       {
          printf("1.Add node at given position\n2.Display\n3.Exit\n");
          printf("enter your choice:");
          scanf("%d",&choice);           //getting input from the user
    switch(choice)
      {
        case 1://Add node at given position
          printf("enter the position to add: ");  //getting position to add from user
          scanf("%d",&position);
          printf("enter the student id:");
          scanf("%d",&id);
          temp=head;
          if(head==NULL)
            {
               head=(struct student*)malloc(sizeof(struct student));
               head->studentid=id;
               head->next=NULL;
               break;
            }
          
          for(i=1;i<position;i++)
            {
               temp=temp->next;
            }
          if(temp==NULL)
            {
              printf("inadequate elements\n");
              break;
            }
          new=(struct student*)malloc(sizeof(struct student)); //to create new student
          new->studentid=id;
          new->next=temp->next;
          temp->next=new;
          break;
             
      case 2://Display nodes
          if(head==NULL)
            {
              printf("no data is present to display in the list\n\n");
              break;
            }
          else
            {
              temp=head;
              while(temp!=NULL)         //to transverse till the last element in the list
                {
                  printf("%d\n",temp->studentid);  
                  temp=temp->next;
                }
              break;
            }
            
       case 3://Exit
            exit(0);
            
      }
  }
}
               
               
               
           
               
            
            
            
            
            
            
            
         
