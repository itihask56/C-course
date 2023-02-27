#include <stdio.h>

// print Table using for loop
/*int main(int argc, char const *argv[])
{
    int n ,i;

    printf("Emter num:");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d X %d =%d\n",n,i,n*i);
    }
    return 0;
}*/

// print table using while loop

/*int main(int argc, char const *argv[])
{
     int i=1,n;
     printf("Enter num:");
     scanf("%d",&n);

     while(i<=10){
         printf("%d X %d =%d\n",n,i,n*i);
         i++;
     }
    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
     int i=1,n;
     printf("Enter num:");
     scanf("%d",&n);

     do
     {
         printf("%d X %d = %d\n",n,i,n*i);
         i++;
     } while (i<=10);

    return 0;
}*/

// reversing a num

/*int main(int argc, char const *argv[])
{
     int n,rem,result=0;
     printf("Enter num:");
     scanf("%d",&n);

     int temp=n;

      while(n>0){
          rem=n%10;
         result =result*10 +rem;
         n=n/10;

      }

      printf("%d",result);

    return 0;
}
*/

// fibonacci series

/*int main(int argc, char const *argv[])
{
    int n, pre = 0, cur = 1, i, result;

    printf("Enter num :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", pre);
        result = pre + cur;
        pre = cur;

        cur = result;
    }

    return 0;
}*/

// program to find the quadrants of the coordinates entered by the user
/*nt main(int argc, char const *argv[])
{
     int x,y;
     printf("Enter coordinates...\n");
     scanf("%d%d",&x,&y);




     if(x>0 && y>0){
         printf("1st quadrant...\n");
     }
     else if(x<0 && y>0){
         printf("2nd quadrant...\n");
     }
     else if(x<0 && y<0){
         printf("3rd quadrant...\n");
     }
     else if(x=0 && y=0){
         pritnf("Coordinates lie on the origin");
     }
     else if(x=0 && y>0){
         printf("Points lie on the y axis ");
     }
     else if(y=0 && x>0){
         printf("Points lie on the x axis");
     }
     else{
         printf("4th quadrant...\n");
     }


    return 0;
}*/
