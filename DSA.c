#include <stdio.h>
#include <stdlib.h>

// Null pointer
int main()
{
    int *ptr = NULL;
    printf("%d\n", ptr);

    printf("%d", sizeof(NULL));
    return 0;
}

/*int main(int argc, char const *argv[])
{
    int *ptr = NULL;
    int a = 10;
    ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", &(*ptr));
    printf("%d", *(&(*ptr)));
    return 0;
}*/

// dangling pointer:
/*int fun()
{
    int num = 10;
    return &num;
}
int main()
{
    int *ptr = NULL;
    ptr = fun();
    printf("%d", *ptr);
    return 0;
}*/

// Wild pointer/unintialize pointer : These pointer usually point to some
// arbitrary memorty location

/*int main(int argc, char const *argv[])
{
     int *p;
     *p=NULL;
    return 0;
}*/

// Creating a node in c

/*struct node
{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    printf("%d\n", head->data);
    printf("%d", head->link);
    return 0;
}*/

// creating a single linked list of two nodes

/*struct node{
    int data;
    struct node *link;
};


int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
     current->data=98;
     current->link=NULL;
     head->link=current;

    return 0;
}*/

/*struct node{
    int data;
    struct node *link;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    struct node *current2=malloc(sizeof(struct node));
    current2->data=3;
    current2->link=NULL;
    current->link=current2;

    return 0;
}

struct node{
    int data;
    struct node *link;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    return 0;
}*/

// creating a single linked list of 3 nodes: Not a better way

/*struct node{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link = NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=50;
    current->link=NULL;
    head->link=current;

    struct node *current2=malloc(sizeof(struct node));
    current2->data=56;
    current2->link=NULL;
    current->link=current2;
    return 0;
}
*/
// count the number of nodes

/*struct node
{
    int data;
    struct node *link;
};

int count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 69;
    current->link = NULL;
    head->link->link = current;

    int no_of_nodes = count_of_nodes(head);
    printf("Number of nodes in the linked list is:%d", no_of_nodes);
}*/

// Printing the data of the nodes

/*struct node
{
    int data;
    struct node *link;
};

void print(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 12;
    current->link = NULL;
    head->link->link = current;

    print(head);

    return 0;
}*/

// add element at the end when array is not full

/*int main(int argc, char const *argv[])
{
    int arr[10];
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int freePos = n;
    freePos = end(arr, freePos, 65);

    for (int i = 0; i < freePos; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
int end(int arr[], int freePos, int data)
{
    arr[freePos] = data;
    freePos++;
    return freePos;
}*/

// add element at the end when array is full

/*int main(int argc, char const *argv[])
{
    int arr[3], n;
    printf("Enter the size of the array: ");

    scanf("%d", &n);
    printf("Enter the elemets of the array:");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    int freePos = n;

    if (n == size)
    {
        int b[size + 1];
        freePos = add_at_end(arr, b, size, freePos, 65);
        for (int i = 0; i < freePos; i++)
        {
            printf("%d", b[i]);
        }
    }

    return 0;
}
int add_at_end(int arr[], int b[], int n, int freePos, int data)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = arr[i];
        b[freePos] = data;
        freePos++;
        return freePos;
    }
}*/

/*struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {

        ptr = ptr->link;
    }
    ptr->link = temp;


}

int main(int argc, char const *argv[])
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 67;
    current->link = NULL;
    head->link->link = current;

    add_at_end(head, 78);
    return 0;
}*/

/*struct node
{
    int data;
    struct node *link;
};

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);
    ptr = add_at_end(ptr, 89);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}*/

// Add node at the begining of the list
/*struct node
{
    int data;
    struct node *link;
};

struct node *add_at_beg(struct node *head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;
    head->link = ptr;

    int data = 3;

    head = add_at_beg(head, data);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
*/
 

// Insert node at a cetain postion int the list of

/*struct node
{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{
     struct node *head= malloc(sizeof(struct node));
     head->data=45;
     head->link=NULL;

     struct node *ptr= malloc(sizeof(struct node));
     ptr->data=56;
     ptr-link=NULL;


    return 0;
}
*/
