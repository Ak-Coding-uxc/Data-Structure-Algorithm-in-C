#include <stdio.h>

#define maxsize 10

int queue[maxsize];
int front = -1; // for delete element
int rear = -1;  // for insert element
int num;        // to take input from user.

void insert(){
    printf("\n----INSERT-----\n");
    if(rear == maxsize -1){
        printf("Overflow\n");
    }
    else{
        if(rear == -1 && front == -1){
            rear = front = 0;
        }
        else{
            rear++;// rear = rear + 1;
        }
        printf("Enter value:- ");
        scanf("%d",&num);
        queue[rear] = num;
    }
}

void delete(){
    printf("\n-----DELETE-----\n");
    if(front > rear || rear == -1){
        printf("Queue is Empty\n");
    }
    else{
        num = queue[front];
        front++;
        printf("%d is deleted\n",num);
    }
}

void display(){
    if(front > rear || rear == -1){
        printf("Queue is Empty\n");
    }
    else{
        for(int i = rear;i >= front; i--){
            printf("%d\n",queue[i]);
        }
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n-----QUEUE-----\n");
        printf("Select your choices :- \n");
        printf("1. Insert \n2. Delete \n3. Display \n4. Exit\n");
        printf("\nEnter your choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // case 1 mane value 1 h toh.
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting from the queue\n");
            break;

        default:
            printf("Wrong choices\n");
        }
    } while (choice != 4);

    return 0;
}
