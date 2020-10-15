#include<stdio.h>
#define Max 100
int Stack[Max];
int Top=-1;

void push(int data)
{
    if(Top==Max-1)
    {
        printf("Stack is Overflow");
    }
    else
    {
        Stack[++Top]=data;
    }
}

int pop()
{
    int tmp;
    if(Top==-1)
    {
        return printf("Stack is Underflow");
        
    }
    else
    {
        return tmp=Stack[Top--];
        
    }
}

void peek()
{
    printf("%d is on the top of the Stack",Stack[Top]);
}
void display()
{
    if(Top==-1)
    {
        printf("Stack is Underflow\n");     
    }
    else
    {
        printf("\nThese are the elements in the Stack :\n");
        for(int i=Top;i>=0;i--)
        {
            printf("%3d\n",Stack[i]);
        
        }
    }
}
int main()
{
    int ch,pushElement,popElement,push_Element_Again;
    
    do{
            printf("**Main-Menu**"
                   "\n1.Push Element."
                   "\n2.Pop Element."
                   "\n3.Peek Element."
                   "\n4.Display Stack."
                   "\nEnter your choice.\n");
              
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                        printf("Enter element Which You want push onto Stack : \n");
                        scanf("%d",&pushElement);
                        push(pushElement);
                        do{
                        
                            printf("Do You want to push Element onto Stack Again!:"
                                   "\nPress 1 for Yes  & Press 2 for No.\n");
                            scanf("%d",&push_Element_Again);
                            
                            switch(push_Element_Again)
                                    {                               
                                        case 1:
                                                printf("Push element onto Stack : \n");
                                                scanf("%d",&pushElement);
                                                push(pushElement);
                                                break;
                                                
                                        case 2: 
                                                break; 
                                        
                                        default:
                                                printf("You have entered wrong option! Please Try Again."
                                                       "\n\n\nWelcome Again in Main-Menu");
                                     }
                           }while(push_Element_Again<2);
                        break;
                case 2:
                        popElement = pop();
                        printf("\nPop Element is = %d \n",popElement);
                        break;
                case 3:
                        peek();
                        break;
                case 4:
                        display();
                        break;
                default: printf("\nThank  you\n");       
            }
    }while(ch!=5);
    
    
    
    
}
