#include <stdio.h>
#define maxsize 10

// global variables can be used in any function
int stack[maxsize];
int top = -1;
int num;
/* Some Rules:-
1. The same name variable declare in other function act as local variable.
2. The global variable can be used in any function.
*/

void push()
{
    printf("\n------PUSH------\n");
    if (top == maxsize - 1)
    {
        printf("Stack is Overflow\n");
    }
    else
    {
        top++; // for 1st time top move to 1(top = 0 + 1) then so on.
        printf("Enter value:- ");
        scanf("%d",&num);

        stack[top] = num;
        printf("The %d value is push in stack\n",stack[top]);
    }
}

void pop(){
    printf("\n-----POP------\n");
    if(top == -1){
        printf("Stack is Underflow\n");
    }
    else{
        num = stack[top];
        top--;
        printf("The %d value is pop in stack\n",num);
    }
}

void display(){
    printf("\n-----DISPLAY-----\n");
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Elemnts are:- \n");
        while(top != -1){
            printf("%d\n",stack[top]); // 9 8 ... 1 0 -1
            top--;
        }
    }
}


int main()
{
    int choice;
    do
    {
        printf("\n------STACK------\n");
        printf("All choice:- \n");
        printf("1. Push \n2. Pop \n3. Display \n4. Exit\n");
        printf("\nEnter your choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exit from the Stack\n");
            break;

        default:
            printf("Wrong choice\n");
        }
    } while (choice != 4);

    return 0;
}