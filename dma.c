#include<stdio.h>
#include<stdlib.h>

//malloc

/*int main(int argc, char const *argv[])
{
     int i,n;
     printf("Enter the num. of integrs :");
     scanf("%d",&n);

     int *ptr=(int *)malloc(n*sizeof(int));

     if(ptr==NULL){
         printf("Memory allocation failure");
         exit(1);
     }
     for(i=0;i<n;i++){
         printf("Enter an integer:");
         scanf("%d",ptr+i);

     }
     for(i=0;i<n;i++){
         printf("%d", *(ptr+i));
     }
    return 0;
}
*/  

//Calloc:it is ued to dynamically allocate multiple blocks of memory

//Syntax : void *calloc(size_t n, size_t size);
//int *ptr = (int *)calloc(10*sizeof(int));

//realloc:function i use to change the ize of the memory block withouts
//losing the old data.

/*int main(int argc, char const *argv[])
{
     int i;
     int *ptr=(int *)malloc(2*sizeof(int));

     if(ptr==NULL){
         printf("Memory block is not allocated");
        exit(1);
     }
     printf("Enter the two numbers: \n");
     for(i=0; i<2; i++){
         scanf("%d",ptr+i);

     }
     ptr=(int *)realloc(ptr,4*sizeof(int));
     if(ptr==NULL){
        printf("Memory block is not allocated");
        exit(1);
     }
     printf( "Entr two more numbers :\n");

     for(i=2; i<4; i++){
         scanf("%d",ptr+i);
     }

     for(i=0; i<4; i++){
         printf("%d",*(ptr+i));
     }
         
      
    return 0;
}
*/

