#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertFront(struct node *head, int val)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->next = head;
    return p;
}
struct node *insertEnd(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertAscendingO(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    if (head->data >= val)
    {
        ptr->data = val;
        ptr->next = head;
        return ptr;
    }
    else
    {
        while (p->next != NULL && p->next->data <= val)
        {
            p = p->next;
        }
        ptr->data = val;
        ptr->next = p->next;
        p->next = ptr;
        return head;
    }
}
struct node *deletefirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deleteBefore(struct node *head, int index)
{
    struct node *p = head;
    struct node *temp;
    int i = 1;
    if (index > 2)
    {
        while (i <= index - 2)
        {
            temp = p;
            p = p->next;
            i++;
        }
        temp->next = p->next;
        free(p);
        return head;
    }
    else if (index == 1)
    {
        printf("Invalid Position\n");
        return head;
    }
    else
    {
        head = head->next;
        return head;
    }
}
struct node *deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *temp;
    int i = 1;
    while (i <= index)
    {
        temp = p;
        p = p->next;
        i++;
    }
    temp->next = p->next;
    free(p);
    return head;
}
void Display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    int choice, val, index;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));
    head->data = 23;
    head->next = second;
    second->data = 32;
    second->next = third;
    third->data = 45;
    third->next = forth;
    forth->data = 56;
    forth->next = NULL;
    do
    {
        printf("\n1.Insert a node at the front of linked list\n");
        printf("2.Insert a node at the end of linked list\n");
        printf("3.Insert a node in ascending order of linked list\n");
        printf("4.Delete a first node of linked list\n");
        printf("5.Delete a node of before specified position\n");
        printf("6.Delete a node of after specified position\n");
        printf("7.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value of new node\n");
            scanf("%d", &val);
            head = insertFront(head, val);
            Display(head);
            break;
        case 2:
            printf("Enter value of new node\n");
            scanf("%d", &val);
            head = insertEnd(head, val);
            Display(head);
            break;
        case 3:
            printf("Enter value of new node\n");
            scanf("%d", &val);
            head = insertAscendingO(head, val);
            Display(head);
            break;
        case 4:
            head = deletefirst(head);
            Display(head);
            break;
        case 5:
            Display(head);
            printf("Enter the position\n");
            scanf("%d", &index);
            head = deleteBefore(head, index);
            Display(head);
            break;
        Output:
        case 6:
            Display(head);
            printf("Enter the position\n");
            scanf("%d", &index);
            head = deleteatindex(head, index);
            Display(head);
            break;
        case 7:
            printf("\nName:DHAMELIYA ARPIT MUKESHBHAI\n");
            printf("En. No. : 210130107036 \n");
            printf("Practical No. : %d", 7);
            time_t t;
            time(&t);
            printf("\nTime : %s", ctime(&t));

            return 0;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 7);
    return 0;
}
