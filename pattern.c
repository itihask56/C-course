#include<stdio.h>

// pattern 1: square
  //****
  //****
  //****
  //****                                                                      
/*int main(int argc, char const *argv[])
{
     int i,j,row;

     printf("Enter the number of rows you want to print :");
     scanf("%d",&row);

     for(i=1;i<=row;i++) {
         for(j=1;j<=row;j++) {
             printf("*");
         }
         printf("\n");
     }
    return 0;
}*/


//pattern 2 :left right angle trianle



/*
     *
     **
     ***
     ****
     *****
     ******
*/

/*int main(int argc, char const *argv[])
{
     int i,j,row;

     printf("Enter the no. of rows :");
     scanf("%d",&row);

     for(i=1;i<=row;i++){
         for(j=1;j<=i;j++){
             printf("*");
         }
         printf("\n");
     }
    return 0;
}*/





 


//pattern 3 : Right angle triangle

/*

     *
    **
   ***
  ****
 *****
******

*/

/*int main(int argc, char const *argv[])
{
     int i,j,k,row;

    printf("Enter the no. of rows:");
    scanf("%d",&row);

    for(i=1;i<=row;i++){


        for(k=1;k<=(row-i);k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){

            printf("*");

        }
        printf("\n");

    }
    return 0;
}*/


//pattern 4;


/*
*****
****
***
**
*
*/



/*int main(int argc, char const *argv[])
{
     int i,j,row;
     printf("Enter the number of rows:");
     scanf("%d",&row);

     for(i=row;i>=1;i--){

         for(j=1;j<=i;j++){
             printf("*");
         }
         printf("\n");
     }

    return 0;
}

*/


// Pattern 5:

/*

******
 *****
  ****
   ***
    **
     *
*/

/*int main(int argc, char const *argv[])
{
     int i,j,k,row=5;

    printf("Enter the no. of rows :");
    scanf("%d",&row);

    for(i=1;i<=row;i++){

        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=i;j<=row;j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}*/


