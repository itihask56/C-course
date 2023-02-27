#include <stdio.h>
#include <stdlib.h>
// creating a node of a list
/*struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->next = NULL;
    return 0;
}*/

/*struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addToEmpty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    head = addToEmpty(head, 45);
     
    printf("%d\n", head->data);
    return 0;
}*/

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addToEmpty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
int main(int argc, char const *argv[])
{
     struct node *head= malloc(sizeof(struct node));
     head->prev = NULL;
     head->data=45;
     head->next = NULL;

     head = addToEmpty(head, 56);
     while(head != NULL){
        printf()
     }
    return 0;
}

