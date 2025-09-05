#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *add;
};
struct node *start = NULL, *temp, *new1, *next, *prev, *ptr;

int n; // global variable

void create()
{
    if (start != NULL)
    {
        printf("Linked List is already created\n");
    }
    else
    {
        int n;
        char ch;
        printf("Enter data:- ");
        scanf("%d", &n);
        start = (struct node *)malloc(sizeof(struct node));
        start->data = n;
        start->add = NULL;
        temp = start;
        printf("Press y to continue and n to exit:- ");
        scanf(" %c", &ch);
        while (ch == 'y' || ch == 'Y')
        {
            printf("Enter data:- ");
            scanf("%d", &n);
            new1 = (struct node *)(malloc(sizeof(struct node)));
            new1->data = n;
            new1->add = NULL;
            temp->add = new1;
            temp = temp->add;
            printf("Press y to continue and n to exit:- ");
            scanf(" %c", &ch);
        }
    }
}

void insert()
{
    printf("\n\n-----INSERT-----\n");
    if (start == NULL)
    {
        printf("First create Linked List\n");
    }
    else
    {
        int choice;
        do
        {
            printf("\n-----INSERT-----\n");

            printf("Avilable Choices:- \n");
            printf("1.First\n2.Middle\n3.Last\n4.Exit\n");
            printf("Select your choice:- ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("Enter data:- ");
                scanf("%d", &n);
                new1 = (struct node *)(malloc(sizeof(struct node)));
                new1->data = n;
                new1->add = start;
                start = new1;
            }

            else if (choice == 2)
            {
                int pos;
                int i = 1;

                printf("Enter position to insert:- ");
                scanf("%d", &pos);

                printf("Enter data:- ");
                scanf("%d", &n);
                new1 = (struct node *)(malloc(sizeof(struct node)));
                new1->data = n;
                new1->add = NULL;

                next = start;
                while (i < pos)
                {
                    prev = next;
                    next = next->add;
                    i++;
                }
                prev->add = new1;
                new1->add = next;
            }

            else if (choice == 3)
            {
                printf("Enter data:- ");
                scanf("%d", &n);
                new1 = (struct node *)(malloc(sizeof(struct node)));
                new1->data = n;
                new1->add = NULL;
                next = start;

                while (next->add != NULL)
                {
                    next = next->add;
                }
                next->add = new1;
            }
            else if (choice == 4)
            {
                printf("Exiting from the Insert option\n");
            }
            else
            {
                printf("Wrong choice\n");
            }
            printf("\n");
        } while (choice != 4);
    }
}

void delete()
{
    printf("\n-----DELETE-----\n");
    if (start == NULL)
    {
        printf("First create Linked List\n");
    }
    else
    {
        int pos;
        int i = 1;
        int choice;
        do
        {
            printf("\n-----DELETE-----\n");

            printf("Available choices:- ");
            printf("\n1.First\n2.Middle\n3.Last\n4.Exit\n");
            printf("Enter your choice:- ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                temp = start;
                start = start->add;
                free(temp);
                break;

            case 2:

                printf("Enter position to delete:- ");
                scanf("%d", &pos);
                next = start;
                while (i < pos)
                {
                    prev = next;
                    next = next->add;
                    i++;
                }
                prev->add = next->add;
                free(next);
                break;

            case 3:
                next = start;
                while (next->add != NULL)
                {
                    prev = next;
                    next = next->add;
                }
                prev->add = NULL;
                free(next);
                break;

            case 4:
                printf("Exiting from the delete operation\n");
                break;

            default:
                printf("Wrong choice\n");
            }
            printf("\n");
        } while (choice != 4);
    }
}

void display()
{
    printf("\n------DISPLAY------\n");
    if (start == NULL)
    {
        printf("Linked list not found\n");
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->add;
        }
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n-----Linked List-----\n");
        printf("Select your choices :- \n");
        printf("1.Create\n2. Insert \n3. Delete \n4. Display \n5. Exit\n");
        printf("\nEnter your choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2: // case 1 mane value 1 h toh.
            insert();
            break;

        case 3:
            delete();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Exiting from the Linked list\n");
            break;

        default:
            printf("Wrong choices\n");
        }
    } while (choice != 5);

    return 0;
}
