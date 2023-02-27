#include <stdio.h>

// Take input from the user and and output the arrays elements

/*int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    printf("Enter the array elements:");
    // Take input from the user
    int array[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    // print the arrays elements
    printf("Arrays elements are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
*/

// Add the elements of th array

/*int main(int argc, char const *argv[])

{
    printf("Enter the size of the array:")
    int n;
    scanf("%d", &n);
    printf("Enter the arrays element: ");

    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum:%d", sum);
    return 0;
}*/

// print the array in reverse order

/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of they array: ");
    scanf("%d", &n);

    printf("Enter array elements are: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Arrays elements in reverse order: ");
    for (int i = (n - 1); i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}*/

// Arrange the elements in ascending order
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of they array: ");
    scanf("%d", &n);

    printf("Enter array elements are: ");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}