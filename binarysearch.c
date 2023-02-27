#include <stdio.h>

/*int binarySearch(int n, int a[], int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] >= key)
        {
            s = mid - 1;
        }
        else
        {
            e = mid + 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter arrys elements: ");
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key to search: ");
    int key;
    scanf("%d", &key);

    int result = binarySearch(n, a, key);
    printf("%d", result);

    return 0;
}*/

// linear search

/*int linearSearch(int n, int a[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter arrys elements: ");
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key to search: ");
    int key;
    scanf("%d", &key);

    int result = linearSearch(n, a, key);
    printf("%d", result);

    return 0;
}
*/
/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any numberr to check even or odd:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The given number is even number:\n");
    }
    else
    {
        printf("The given number is odd number:\n");
    }
    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
    int arr[6] = {

        1,
        2,
        3,
        4,
        5,
        6,
    };
    int key;
    printf("Enter key:");
    scanf("%d", &key);

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            printf("index:%d", i);
        }
    }
    return 0;
}*/
