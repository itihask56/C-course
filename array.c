#include <stdio.h>

// 1-D array
// Accept array elements and reprint it
/*int main(int argc, char const *argv[])
{
     int i,n,a[10];

     printf("Enter num...\n");
     scanf("%d",&n);
     printf("Enter arrays element...\n");

     for(i=0;i<n;i++)
     {
         printf("Enter elements %d :",i+1);
         scanf("%d",&a[i]);

     }
     for(i=0;i<n;i++)
     {

        printf(" \n Element %d:%d",i+1,a[i]);

     }
    return 0;
}
*/

// Reprint Arrray elements in reverse order of

/* int main(int argc, char const *argv[])
 {
    int i,n,a[10];

    printf("Enter Num....");

    scanf("%d",&n);

    printf("Enter arrays elements...\n");

     for(i=0;i<n;i++){
         printf("Enter elements %d:",i+1);
         scanf("%d",&a[i]);
     }

     for(i=n-1;i>=0;i--){
         printf("\n%d",a[i]);
     }
     return 0;
 }
 */

// Program to find average of n numbers

/*int main(int argc, char const *argv[])
{
    int n,i,sum=0,marks[10];
     float average;
    printf("Enter number...\n");
    scanf("%d",&n);

    printf("Enter array elements...\n");

    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
        sum=sum + marks[i];
    }
    average=sum/n;
    printf("average: %f\n",average);

    return 0;
}
*/

// 2D Array

/*int main(int argc, char const *argv[])
{
     int i,j,m,n,a[5][5];
     printf("Order of 2d array...\n");
     scanf("%d%d",&m,&n);

     printf("Enter arrays elemnts...\n");


     for(i=0;i<n;i++){
         for(j=0;j<m;j++){


             scanf("%d",&a[i][j]);

         }
     }
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             printf("%d",a[i][j]);
             printf("\n");
         }
     }
    return 0;
}
*/

// Add even and odd nums
/*int main(int argc, char const *argv[])
 {
      int i,j,m,n,a[5][5],even=0,odd=0;
      printf("Order of 2d array...\n");
      scanf("%d%d",&m,&n);

      printf("Enter arrays elemnts...\n");


      for(i=0;i<n;i++){
          for(j=0;j<m;j++){


              scanf("%d",&a[i][j]);

          }
      }
      for(i=0;i<n;i++){
          for(j=0;j<m;j++){
                if(a[i][j]%2==0){
                    even=even+a[i][j];
                }
                else{
                    odd=odd+a[i][j];
                }




          }
          printf("Even Sum = %d\n",even);
          printf("odd Sum = %d\n",odd);
      }
     return 0;
 }

*/

// Linear search for
/*int main(int argc, char const *argv[])
{
    int i, a[20], n, x;
    printf("Enter no. elements...\n");
    scanf("%d", &n);

    printf("Enter array elements...\n");
    scanf("%d", &a[i]);

    printf("Enter elements to search...\n");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x == a[i])
            break;
        if (x < n)
            printf("Elements found at index %d\n", i);
        else
            ("Not element found");
    }

    return 0;
}
*/
// Write a C program to merge two one dimensional Array excluding the repeating elements.
/*void main()
{
int a[50],b[50],n1,n2,i;

scanf("%d",&n1); // Number of enements in 1st array

for(i=0;i<n1;i++)

{

scanf("%d",&a[i]); //Elements of the 1st array is entered from test case

}

scanf("%d",&n2);  // Number of enements in 2nd  array


for(i=0;i<n2;i++)

{

scanf("%d",&b[i]); //Elements of the 2nd array is entered from test case

}
for(i=0;i<n1;i++)
    {
        printf("%d",a[i]);
    }

    for(i=0;i<n2;i++)
    {
        if(b[i]==' ')
        continue;
        else
        printf("%d",b[i]);
    }


}
*/
