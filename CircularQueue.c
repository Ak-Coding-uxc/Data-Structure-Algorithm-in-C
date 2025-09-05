#include<stdio.h>

#define maxsize 10

int cq[maxsize];
int front = -1;
int rear = -1;
int num;

void insert(){
    printf("\n-----Circular Queue-------\n");
    if((rear+1) % maxsize == front){
        printf("Cq is Overflow\n");
    }
    else{
        if(front == -1 && rear == -1){
            front = rear = 0;
        }
        else{
            rear = (rear + 1) % maxsize; // 5 = 5 + 1 = 6 % maxsize = 6;
        }
        printf("Enter value:- ");
        scanf("%d",&num);
        cq[rear] = num;
    }
}

void delete(){
    printf("\n------Delete------\n");
    if(front == -1 && rear == -1){
        printf("Element cannot be deleted\n");
    }
    else{
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front + 1) % maxsize;
        }
    }
}

void display(){
printf("\n------Display-----\n");
if(front == -1 && rear == -1){
printf("Elements not available\n");
}
else{
for(int i = front;i <= rear;i++){
    printf("%d\n",cq[i]);
}
}
}


int main(){
    int choice;
    do{
        printf("\n-----Cirular Queue------\n");
        printf("Available Choices:- \n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nSelect your choice:- ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        
            case 2:
            delete();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Exiting from the Circular Queue\n");
            break;

        default:
        printf("Wrong choice\n");
            break;
        }
    }while(choice != 4);
    return 0;
}