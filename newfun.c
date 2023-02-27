#include<stdio.h>
// function with no arguments and no return value
//Display which is greater number
/*

//int greatnum();
int greatnum(){
    int i,j;
    printf("Enter rwo num...");
    scanf("%d%d",&i,&j);
    
    if(i>j)
        printf("Great num is :%d",i);
    
    else
        printf("Great num is :%d",j);
}

 
int main(){
    greatnum();
    return 0;
}*/


// function with no arguments and return value

/*

//int greatnum();

int greatnum(){
    int i,j,greatnum;
    printf("Enter two num...you wanna comapare...");
    scanf("%d%d",&i,&j);
    
    if(i>j)
        greatnum=i;
    else
        greatnum=j;
        
    return greatnum;
}
 
int main(){
    int result;
    
    result=greatnum();
    printf("Greatest num is %d",result);
    return 0;
}
*/



//Function with arguments and no return value

//int greatnum(int a,int b);
/*int greatnum(int x,int y){
    if(x>y)
        printf("The greatest num is :%d",x);
    else
        printf("The greatest num is:%d",y);
    
}

int main(){
    int i,j;
    printf("Enter 2 numbers you wanna compare...");
    scanf("%d%d",&i,&j);
    greatnum(i,j);
    return 0;
}*/


//FUNCTION WITH ARGUMENTS AND A RETURN value

/*int greatnum(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}



int main(int argc, char const *argv[])
{
     int i,j,result;
     printf("Enter two number you wanna compare");
     scanf("%d%d",&i,&j);
     result=greatnum(i,j);
     printf("The greatest number is : %d",result);
    return 0;
}

*/

/*float square(float x){
    float float p;
    p=x*x;
    return (p);

}


int main(int argc, char const *argv[])
{
     float m,n;
     printf("Enter num to find square...\n");
     scanf("%f",&m);
     n=square(m);
     printf("\nSquare of  given num is %f\n",n);

    return 0;
}
*/

//SWAPPING TWO NUMBERS USING CALL BY value
 /*int swap(int x,int y) {
     int temp;
     temp=x;
     x=y;
     y=temp;
     printf("After swapping:a=%d b=%d",x,y);
     return 0;
 }

int main(int argc, char const *argv[])
{
     int a=10,b=20;
     swap(a,b);
     printf("Before swapping : a=%d, b=%d\n",a,b);
    return 0;
}

*/

//SWAP TWO NUMBERS USING CALL BY NUMBERS

/*int swap(int*c,int*d){
    int temp;
    temp=*x;
    *x=*y;
    *y=yemp;

    printf("After swaping:a=%d b=%d",*x,*y);

}

int main(int argc, char const *argv[])
{
     int a=20,b=20;
     swap(&a, &b);
     printf("Before swap : a=%d, b=%d\n",a,b);
    
    return 0;
}
*/





























