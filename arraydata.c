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

// add even numbers in an array and odd numbers seperately
/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter arrays elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even_sum = 0;
    int odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
        else
        {
            odd_sum = odd_sum + arr[i];
        }
    }
    printf("even sum=%d", even_sum);
    printf("\nodd sum=%d", odd_sum);

    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int arr[n];
    int even_sum = 0;
    int odd_sum = 0;
    printf("Enter arrays elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
        else
        {
            odd_sum = odd_sum + arr[i];
        }
    }
    printf("even sum=%d", even_sum);
    printf("\nodd sum=%d", odd_sum);

    return 0;
}*/
// sort even and odd elements of array in store them in a seperate array

/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int arr[n];
    int even_arr[n];
    int odd_arr[n];
    printf("Enter arrays elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_arr[i] = arr[i];
        }
        else
        {
            odd_arr[i] = arr[i];
        }
    }

    printf("even sum:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", even_arr[i]);
    }
    printf("odd sum:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", odd_arr[i]);
    }

    return 0;
}*/

// Add elements in the array to the end of the arrays elements

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
