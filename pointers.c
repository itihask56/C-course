#include<stdio.h>
/*int main(int argc, char const *argv[])
{
     int i=10;
     int *p,*q;

     p=&i;
     q=p;
     printf("%d\n",p);
     printf("%d\n",q);
     printf("%d %d",*p,*q);

    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
     int i=10,j=20;
     int *p,*q;

     p=&i;
     q=&j;
     *q=*p;
     printf("%d\n",p);
     printf("%d\n",q);
     printf("%d %d",*p,*q);
    printf("%d\n",*q);
    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
     int i=1;
     int *q;
     int *p=&i;
     q=p;
     *q=5;
     printf("%d\n",*p);
     printf("%d\n",*q);
    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
     int a=10;
     int *p1;
     int **p2;
     p1=&a;
     p2=&p1;
     printf("Addressof a=%u\n",&a);
     printf("Addressof p1=%u\n",&p1);
     printf("Addressof p2=%u\n",&p2);

     printf("Value: %d\n",*p1);
     printf("value:%d\n",*p2);
     printf("Value :%d\n",**p2);
    return 0;
}*/


//Pointer addition

/*int main(int argc, char const *argv[])
{
     
     int a[] = {1,2,3,4,5};
     int *p=&a[2];
     printf("%d",*(p+2));
    return 0;
}
*/
//pointer subtractions 
/*int main(int argc, char const *argv[])
{
     
     int a[] = {1,2,3,4,5};
     int *p=&a[4];
     printf("%d",*(p-2));
    return 0;
}*/

/*int main(int argc, char const *argv[])
{
     
     int a[] = {1,2,3,4,5};
     int *p=&a[1];
     printf("%d\n",*(p-2));
     printf("%d",&a[0]);
    return 0;
}*/

//Post increment

/*int main(int argc, char const *argv[])
{
     int a[]= {1,2,3,4,5,6,7,8,9};
     
     int *p= &a[1];
    printf("%d",*p);
    printf("%d",*(p++));
    printf("%d",*p);

    return 0;
}
*/


//Comparing the pointers 

/*int main(){
    int a[]= {1,2,3,4,5,6,7};
    int *p= &a[1];
    int *q= &a[5];
    /*printf("%d\n",p<=q);
    printf("%d\n",p>=q);
    q=&a[3];
    printf("%d\n",p==q);
    
    printf("%d\n", *(p+3));
    printf("%d\n",*( q-3));
    printf("%d\n",q-p);
    printf("%d\n", p<q);
    printf("%d\n", *p < *q);

    return 0;
}*/


// Sum of arrays using pointers to arrays
/*int main(int argc, char const *argv[])
{
    int sum=0,*p;

     int a[]= {1,2,3,4,5,6,7};

     for(p= &a[0]; p<= &a[6]; p++){

         sum += *p;

     }
     printf("sum = %d\n",sum);
    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
    int sum=0,*p;

     int a[]= {1,2,3,4,5,6,7};

     for(p= a; p<= a+ 6 ; p++){

         sum += *p;

     }
     printf("sum = %d\n",sum);
    return 0;
}*/

// ----------------------------------------------------------------
/*int main(int argc, char const *argv[])
{
     int a=10,b=5;
     int *ptr1,*ptr2;
     ptr1=&a;
     ptr2=&b;


     printf("Addition = %d\n",a+*ptr1);
     printf("Addition= %d\n",b+*ptr1);
     printf("Addition= %d\n",*ptr2+*ptr1);
     printf("sub= %d\n",b-*ptr1);
     printf(" %d\n",b+ptr1);
     printf("%d\n",b-*ptr1);
     

    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
     printf("%d",a[i]);   //print the array by incrementing index
     printf("%d",i[a]);  //this will also print elements of arrray
     printf("%d",a+i);  //print  address of all the array elements
     printf("%d",*(a+i)); //will print value of array element
     printf("%d",*a);//will print value at a[0]
     a++;  // compile time error
    return 0;
}
*/

  /*int main()
    {
        int i = 10;
        int *p = &i;
        foo(&p);
        printf("%d ", *p);
        printf("%d ", *p);
    }
    void foo(int **const p)
    {
        int j = 11;
        *p = &j;
        printf("%d ", **p);
    }*/

    /*int main()
    {
        int i = 10;
        int *const p = &i;
        foo(&p);
        printf("%d\n", *p);
    }
    void foo(int **p)
    {
        int j = 11;
        *p = &j;
        printf("%d\n", **p);
    }*/