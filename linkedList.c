#include <stdio.h>
#include <stdlib.h>

// creation of a node in c

/*struct node
{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    printf("%d\n", head->data);
    printf("%d", head->link);

    return 0;
}
*/

// single linked list with three nodes
/*struct node
{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{
    // first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // second node
    struct node *tail = malloc(sizeof(struct node));
    tail->data = 46;
    tail->link = NULL;
    head->link = tail;

    // third node
    tail = malloc(sizeof(struct node));
    tail->data = 56;
    tail->link = NULL;
    head->link->link = tail;

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}*/

// printing the data of the nodes without using function
/*struct node
{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *tail = malloc(sizeof(struct node));
    tail->data = 46;
    tail->link = NULL;
    head->link = tail;

    tail = malloc(sizeof(struct node));
    tail->data = 56;
    tail->link = NULL;
    head->link->link = tail;

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
*/
// printing data of singly linked list by using function
/*struct node
{
    int data;
    struct node *link;
};

void print(struct node *head)
{
    struct node *ptr = NULL;
    if (head == NULL)
    {
        printf("Linked list is Empty\n");
    }
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *tail = malloc(sizeof(struct node));
    tail->data = 46;
    tail->link = NULL;
    head->link = tail;

    tail = malloc(sizeof(struct node));
    tail->data = 56;
    tail->link = NULL;
    head->link->link = tail;

    struct node *ptr = NULL;
    ptr = head;

    print(head);

    return 0;
}*/

// Add element in the array when array is not full

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

// Add node at the end of the linked list
/*struct node
{
    int data;
    struct node *link;
};
struct node *add_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {

        ptr = ptr->link;
    }
    ptr->link = NULL;

    return temp;
}
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *tail = malloc(sizeof(struct node));
    tail->data = 56;
    tail->link = NULL;

    head->link = tail;
    struct node *ptr;

    ptr = add_end(head, 67);
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d", ptr->data);
    }
    return 0;
}
*/

// Add node at the begining of the linked list
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
}*/

// add node at the end of the linked list using function:with time complexity O(1)
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
    ptr = add_at_end(ptr, 56);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}*/

// Inserting a node at a certain position

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

void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr, 56);
    ptr = add_at_end(ptr, 67);
    ptr = add_at_end(ptr, 68);
    ptr = head;

    int data = 78, position = 3;
    add_at_pos(head, data, position);
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
*/
// Deleting first node of a singly linked list

/*struct node
{
    int data;
    struct node *link;
};
struct node *del_first(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
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

    head = del_first(head);
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}*/

// Deleting the last node of the list
/*struct node
{
    int data;
    struct node *link;
};
struct node *del_last(struct node *head)
{

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
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

    head = del_last(head);
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->d ata);
        ptr = ptr->link;
    }

    return 0;
}*/

// Deleting last node of the list using single pointer
/*struct node
{
    int data;
    struct node *link;
};
struct node *del_last(struct node *head)
{

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;

        while (temp->link->link != NULL)
        {

            temp = temp->link;
        }

        free(temp->link);
        temp->link = NULL;
    }
    return head;
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

    head = del_last(head);
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}*/

// Dellete entire single linked list

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

struct node *del_first(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {

        temp = temp->link;

        free(head);
        head = temp;
    }
    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 56);
    ptr = add_at_end(ptr, 67);
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->link;
    }

    head = del_first(head);
    if (head == NULL)
    {
        printf("Linked list is empty now.\n");
    }
    return 0;
}*/

// Reversing a single linked list

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

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;

    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
int main(int argc, char const *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 56);
    ptr = add_at_end(ptr, 67);

    head = reverse(head);
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d: ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
*/
/*void Display(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
}

int main()
{
    printf("Itihas verma\n21BCS1566");
    int arr1[100], n, p;

    printf("\nInput the size of array : ");
    scanf("%d", &n);



    printf("Input %d elements in the array in ascending order:\n", n);
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr1[i]);
    }

    printf("Input the data to be inserted..................... \n");
    int data;
    scanf("%d", &data);

    printf("Array before insertion :\n");
    Display(arr1, n);

    printf("\n\nArray after Insertion.........................\n");
    for (int i = 0; i < n; i++)
    {

        if (data < arr1[i])
        {
            p = i;
            break;
        }
        else
        {
            p = i + 1;
        }
    }

    // move all data at right side of the array
    for (int i = n + 1; i >= p; i--)
    {
        arr1[i] = arr1[i - 1];
    }
     //insert value at the proper positi0N

    arr1[p] = data;

    Display(arr1, ++n);
    printf("\n");
}*/

struct Node
{
    int data;
    struct Node *next;
};

void append(struct Node **head_ref, int new_data)
{

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    struct Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{

    struct Node *head = NULL;
    int ele;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ele);
        append(&head, ele);
    }
    struct Node *temp = head;
    struct Node *odd = NULL;
    struct Node *even = NULL;
    while (temp != NULL)
    {
        int ele = temp->data;
        if (ele % 2 == 0)
        {
            append(&even, ele);
        }
        else
        {
            append(&odd, ele);
        }
        temp = temp->next;
    }

    printf("Created Linked list 1 is: ");
    printList(odd);
    printf("\nCreated Linked list 2 is: ");
    printList(even);

    return 0;
}
