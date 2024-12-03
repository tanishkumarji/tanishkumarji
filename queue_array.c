#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 10
int queue[MAX_SIZE],rear=-1,front=0;
void Insert();
void Delete1();
void Display();
void main(){
    int choice;
    do{
        printf("\n---------------------------");
        printf("\n--------QUEUE---------");
        printf("\n1).Insert\n2).Delete\n3).Display\n4).exit\n");
        printf("------------------------------");
        printf("\nEnter your choice=>");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete1();
            break;
        case 3:
            Display();
            break;
        }
    }
    while(choice!=4);
getch();
}
void Insert(){
    int n;
    if(rear==MAX_SIZE-1){
        printf("overflow");
    }
    else{
       printf("Enter the element;");
       scanf("%d",&n);
       rear++;
       queue[rear]=n; 
    }
}
void Delete1(){
    int n;
    if(front>rear){
        printf("queue is empty");
    }
    else{
        n=queue[front];
        front++;
        printf("deleted element is %d",n);

    }
}
void Display(){
    int n;
    if(front>rear){
        printf("queue is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}