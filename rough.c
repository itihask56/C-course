#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
/*void main(int argc, char const *argv[])   //PQRS 
{
      char str1[100]="pqrs";
      int i;
      for(i=0;i<4;i++){
          printf("%c",str1[i]-32);
      }
}*/
 
/*int main(int argc, char const *argv[])           // compiler error
{
     int arr[]={1,2,3,4,5};
     int *ptr,i;
     ptr=&arr[3];
     ptr++;
     printf("%d%d",ptr,arr[i]);
     ptr--;
     printf("%d%d",ptr,i[ptr]);
    return 0;
}*/


 

/*int main(int argc, char const *argv[])       //*ptr,**ptr : Error
{
     int arr[]={1,2,3,4,5};
     int *ptr1;
     int **ptr2;
     ptr1=&arr[2];
     ptr2=ptr1;
     printf("%d,%d",*ptr2,**ptr2);
     
}*/

/*int main(int argc, char const *argv[]){       //   ptr2-ptr1=3
     int arr[]={1,2,3,4,5};
     int *ptr1;
     int *ptr2;
     ptr1=arr;
     ptr2=&arr[3];
     printf("%d",ptr2-ptr1);
     
}*/
  
/*int main(int argc, char const *argv[]){       //   *ptr1+*ptr2=5
     int arr[]={1,2,3,4,5};
     int *ptr1;
     int *ptr2;
     ptr1=arr;
     ptr2=&arr[3];
     printf("%d",*ptr1+*ptr2);
     
}*/


/*int main(){               //   ptr2+ptr1=compiler error
     int arr[]={1,2,3,4,5};
     int *ptr1;
     int *ptr2;
     ptr1=arr;
     ptr2=&arr[3];
     printf("%d",ptr2+ptr1);
     
}*/


/*void main()                    // struct student :8 

 { 
     struct student{
         int no;
         char name[20];
         
     };
     struct student s;
     s.no=8;
     printf("%d",s.no);
     
     return 0;
     
}*/



 

/*struct student{                //struct student :Error/hello
    int no=5;
    char name[20];
    
};
void main(){
    struct student s;
    s.no=8;
    printf("hello");
}
*/

 

/*struct student{              //str. st  alan /tutor: error
    char *name;
    
};
struct student fun(void){                 
    struct student s;
    s.name="alan";
    return s;
}


void main(){
     
    struct student m=fun();
    
    s.name="turing";
    printf("%s",m.name);
}
*/

/*int main(int argc, char const *argv[])      //struct=compiler error
{
     struct site{
         char name[]="Quiz";
         int pages=200;

     };
      
     struct site *ptr;
     printf("%d",ptr->pages);
     printf("%s",ptr->name);
     getchar();
    return 0;
}*/


/*int main(){          //Garbage 1--2--
    int arr[3],i=0;
    while(i<3){
        arr[i]=++i;
        
        
    }
    
    for(i=0;i<3;i++){
        printf("%d--",arr[i]);
    }
    return 0;
}
*/


 
 /*int main(){                         // t
    char arr[15]="pointer array";
    int *ptr;
    ptr=arr;
    printf("%c",ptr[1]);
    return 0;
}
 */
 

/* int main(){                        //arr[15]=*ptr: Garbage
    char *ptr="Pointer in c",arr[15];
    arr[15]=*ptr;
    printf("%c",arr[0]);
    return 0;
}*/

/*int main()                          // *(iptr+2)=12
{
 int *iptr;
 int i, arr[2][2] = {10, 11, 12, 13};
 iptr = *arr ;
 printf("%d ", *(iptr+2));
 return 0;
}*/
//-------------------------------------------------------------------
//       FUNCTIONS

/*int main()                    //ERROR
{
	function();
	return  0;
}
void function()
{
	printf("Function in C is awesome");
}
*/

/*a()                         //C FUNCTION
{
	printf("Function");
}
b()
{
	printf("Function in C");
}
c()
{
	printf("C function");
}
main()
{
	int (*ptr[3])();
	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;
	ptr[2]();
	return 0;
}*/

/*int function();              // 0
main()
{
	int i;
	i = function();
	printf("%d", i);
	return 0;
}
function()
{
	int a;
	a = 250;
	return 0;
}*/

/*int main(){                               //garbage 12
    int arr[3],i=0;
    while(i<3){
        arr[i]=++i;
        
        
    }
    
    for(i=0;i<3;i++){
        printf("%d--",arr[i]);
    }
    return 0;
}
*/

/*int main(int argc, char const *argv[])       //hl
{
     char *ch="hello";
     printf("%s %s\n",ch,ch[2]);
     
}*/

/*int main(int argc, char const *argv[])        //50,4,65,4
{
     int ival;
     char cval;
     void *ptr;
     ival=50;cval=65;
     ptr=&ival;
     printf("value=%d,size=%d\n",*(int *)ptr,sizeof(ptr));

     ptr=&cval;

     printf("value=%d,size=%d\n",*(char *)ptr,sizeof(ptr));
    return 0;
}*/

/*int main(int argc, char const *argv[])        //20,4
{
     float arr[]={1,2,3,4,5};
     float *ptr;
     ptr=&arr[2];
     printf("%d %d",sizeof(arr),sizeof(ptr));
    return 0;
}*/

/*int main()                                         ///2008 1 2006 4
{
     int arr[]={1,2,3,4,5};
     int *ptr,i;
     ptr=&arr[3];
     ptr++;
     printf("%d %d",ptr,arr[i]);
     ptr--;
     printf("%d %d",ptr,i[ptr]);
    return 0;
}
*/

 /*int main(int argc, char const *argv[])           //arr+5
 {
      char arr[]="ThapaQuiz";
      printf("%s ",(arr+5));
      
     return 0;
 }*/
 
/*int main(int argc, char const *argv[])             //  71 Q
{
     char str[]="%d %c",arr[]="GeeksQuiz";       
     printf(str,0[arr],2[arr+3]);
    return 0;
}*/


/*int main(int argc, char const *argv[])               //yes
{
     int x=-2;
     if(!0==1)
     printf("Yes");
     else
     printf("No");
    return 0;
}*/

/*int main(int argc, char const *argv[])            //0
{
     int a=2,b=2;
     if(a!=0)
        b=0;
    else    
        b*=10;
    printf("%d",b);

    return 0;
}
*/

/*void main(){                                //CD
    int a=2;
    switch(a){
        case 4: printf("A");break;
        case 3: printf("B");
        default: printf("C");
        case 1: printf("D");break;
        case 5: printf("E");
    }
    
     
}*/

/* int main(int argc, char const *argv[])                //FALSE
 {
      char result,str[]="\0chandigarhuniversity";
      result=printf("%s",str);
      if(result)
          printf("True");

     else
        printf("false");
      
     return 0;
 }
 *-/

/*int main(int argc, char const *argv[])      //infinite times
{
     char str[]="Ihelp";

     while(str +strlen(str));
     printf("*");
    return 0;
}*/

/*int main(int argc, char const *argv[])    //Mello
{
     char str[20]="Hello";
     char *const p= str;
     *p='M';
     printf("%s\n",str);

    return 0;
}*/

/*int main(int argc, char const *argv[])    //value is=7
{
     char str[]="Value is =%d";
     int a='7';
     str[11]='c';
     printf(str,a);

    return 0;
}*/


/*int main(int argc, char const *argv[])                 //i=4
{
     int i=4;
     switch(i){
         default: ;
         case 3: 
         i+=5;
         if(i==8){
             i++;if(i==9)break;
             i*=2;
         }
         i=4;
         break;
         case 8:
         i+=5;
         break;
     }
     printf("i=%d\n",i);
    return 0;
}
*/

/*int main(int argc, char const *argv[])                 //GeeksQuiz
{
     int i=0;
     switch(i){
         case '0':printf("Geeks");
         break;
         case '1':printf("Quiz");
         break;
         default: printf("GeeksQuiz");
     }
    return 0;
}*/


/*int main(int argc, char const *argv[])          //650000000
{
     char X[10]={'A'},i;
     for(i=0;i<10;i++)
     printf("%d",X[i]);
     
    return 0;
}
*/

/*int main(int argc, char const *argv[])         //65480
{
     int a[3][4]={1,2,3,4,5,6,7,8,9,0};
     printf("%u",a+2);
    return 0;
}*/

/*int main(int argc, char const *argv[])  //junk ,0.1oooo
{
     float x=0.1;

     printf("%d\n",x);
     printf("%f",x);
    return 0;
}*/

/* int main(int argc, char const *argv[])
 {
      if(printf("hello")==strlen("Hello"))
        printf("...Friends");
    else
        printf("...Enemies");
     return 0;
 }*/
 
/*int main(int argc, char const *argv[])
{
     int x=0;
     if(x=0)
        printf("zero");
    else
        printf("one");
    return 0;
}*/

/*int main(int argc, char const *argv[])
{
     unsigned int i=23;
     signed char c=-23;
     if(i>c)
     printf("yes\n");
     else
     printf("no\n");

    return 0;
}
 */

/*int main(int argc, char const *argv[])
{
     int num,*pnum1,*pnum2;
     pnum1=&num;
     *pnum1=1;
     pnum2=pnum1;
     *pnum1=num+*pnum2;
     printf("%d %d %d\n",num,*pnum1,*pnum2);
    return 0;
}
*/

/*int main(int argc, char const *argv[])
{
     int num,*pnum1,*pnum2;
     pnum1=&num;
     *pnum1=1;
     pnum2=pnum1;
     //*pnum1=num+*pnum2;
     printf("%d %d %d\n",num,pnum1,*pnum2);
    return 0;
}*/

/*int main(int argc, char const *argv[])
{
     int num,*pnum1,*pnum2;
     pnum1=&num;
     *pnum1=1;
     pnum2=pnum1;
      
     printf("%d %d \n",num,(pnum1 + pnum2));

}*/

/*int main(int argc, char const *argv[])
{
     short int i=95;
     char c=97;
     printf("%d %d %d\n",sizeof(int),sizeof(c),sizeof(c+i));
    return 0;
}*/

/*int main(int argc, char const *argv[])
{
     int i=(1,2,3);
     printf("%d",i);
    return 0;
}

*/
/*int main(int argc, char const *argv[])
{
     int h=8;
     int b=(h++,h++);
     printf("%d%d",h,b);

    return 0;
}*/

/*int main(int argc, char const *argv[])
{
     int x=10;
     float x=10;
     printf("%d",x);
    return 0;
}
*/

 /*int main(int argc, char const *argv[])
 {
     int a[]={5,1,15,20,25};
int i,j,m;
i=++a[1];
j=a[1]++;
m=a[i++];
printf("%d%d%d",i,j,m);

     return 0;
 }*/

 /*int main(int argc, char const *argv[])
 {
      char str[20]="Hello";
      char *const p=str;
      *p='M';
      printf("%s",str);

     return 0;
 }*/

  int add(int x,int y){
      int sum=x+y;
      printf("sum:%d\n",sum);
      int avg=sum/2;
  }
  
  
  int main(int argc, char const *argv[])
  {
       int a,b;
       printf("Enter num a and b:\n");
       scanf("%d%d",&a,&b);
       int *x,*y;
       x=&a;
       y=&b;
       
       printf("Average :%d",add(*x,*y)) ;
        
      return 0;
  }
  
 
 
 
















































































































