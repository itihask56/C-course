/* Function:is a set of statements that takes inputs, perform some computation and produce output.

syntax : Return_type fun_name(set_of_inputs)*/

#include <stdio.h>

// Area of rectangle

/*int areaOfRect(int x, int y){
    int area;
    area =x*y;
   return area;

}
int main(int argc, char const *argv[])
{
     int x=10,y=10;
      int area=areaOfRect(x,y);
     printf("%d\n", area);

      x=20, y=10;
      area=areaOfRect(x,y);
     printf("%d\n", area);
    return 0;
}*/

// func. declaration without any parameter

/*char fun();
int main(int argc, char const *argv[])
{
     char c=fun();
     printf("Characters: %c\n", c);

}

char fun(){
    return '1';
}
*/

// Function definition:cosists of block of code which is capable of performing some specific task.

/*int add(int a ,int b){
    return (a + b);
}

int main(int argc, char const *argv[])
{
     int m=20,n=30,sum=0;

     sum= add(m,n);
     printf("sum is :%d\n",sum);
    return 0;
}*-/




/*int sub(int,int);

int main(int argc, char const *argv[])
{
     int m=20,n=30,minus;

     minus=sub(m,n);
     printf("Subtraction :%d\n",minus);

}

int sub(int a,int b){
    return (a-b);
}
*/

/*int fun(int num){

    int count =2;
    while(num){
        count++;
        num>>=2;
    }
    return (count);
}*/

/*int add(int a , int b){
    int sum = a+b;
     return sum;
}

int main(int argc, char const *argv[])
{
     int m=20,n=30;
     int sum = add(m ,n);
     printf("sum = %d\n",sum);

      m=20,n=80;
      sum = add(m ,n);
     printf("sum = %d\n",sum);
}*/
/*int add(int ,int );

int main(int argc, char const *argv[])
{
     int m=20,n=30,sum;
     sum = add(m ,n);
     printf("sum = %d\n",sum);


}
int add(int a ,int b ){
    return a+b;
}*/

/*int arith(int ,int);

int main(int argc, char const *argv[])
{
     int m=20,n=30;
     int sum =arith(m,n);

    printf("Result = %d\n",sum);
}

 int arith(int a,int b){
    return (a+b);
}*/
