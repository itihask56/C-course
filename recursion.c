#include<stdio.h>
 
 /*int fun(int n){
     if(n==1)
        return 1;
     else
        return 1 + fun(n-1);
 }

int main()
{
     int n=3;
     printf("%d",fun(n));
    return 0;
}
*/

/*int fun(int n){
    if(n==0){
        return 1;
    }
    else
         return 7+fun(n-2);
}

int main(int argc, char const *argv[])
{
     int n=4;
     printf("%d",fun(n));
    return 0;
}*/

//Factorial using recursive function

/*int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main(int argc, char const *argv[])
{
     int n;
     printf("Enter num :");
     scanf("%d", &n);

     printf("Factorial of a given number %d is %d\n", n, fact(n));
     
}
*/

/*void odd();
void even();

int n=1;

void odd(){
    if(n<=10){
        printf("%d ",n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if(n<=10){
        printf("%d ",n-1);
        n++;
        odd();
    }
    return;
}

int main(int argc, char const *argv[])
{
     odd();
     
}*/

/*void odd();
void even();

int n=1;

void odd(){
    if(n<=10){
        printf("%d",n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if(n<=10){
        printf( "%d",n-1);
        n++;
        odd();
        
    }
    return;
}

int main(int argc, char const *argv[])
{
     odd();
     
}
*/

// Non - tail recursive function

/*int fun(int n){
    if(n==1)
        return 0;
    else    
        return 1+fun(n/2);
}

int main(int argc, char const *argv[])
{
     printf("%d",fun(8));
    return 0;
}*/

void fun(int x){
    return 1;
}
int main()
{
     
    int x=0;
    x=fun();
    printf("%d",x);

    return 0;
}