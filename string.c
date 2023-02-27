#include<stdio.h>
#include<string.h>
/*int main(int argc, char const *argv[])
{
     //printf("%s"," Hello world");
     //printf("%s","You have to dream before your\
     dreams come true!");

    //printf("%s","you have to dream before your "
     //"dreams come true!");

     char *ptr ="Itisha";
     printf("%s",ptr);

     // String litrals are stored as array of characters

// A string variable is a one dimenssional array of characters that is capable of holding a string at a time

    return 0;
}
*/

//Intialization 
//char [6]="Hello";
 
 /*int main(int argc, char const *argv[])
 {
      char a[20];
      printf("Enter the string...\n");
      gets(a);
      printf("%s",a);
      
 }*/

 /*int main(int argc, char const *argv[])
 {
       char s[7] = "Itisha";
       char t[7];

     int i;
      for( i=0; s[i] != '\0'; i++){
           t[i] = s[i];

      }
     t[i]='\0';
      printf("%s",t);
      return 0;
 }*/
 
 

/*int main(int argc, char const *argv[])
{
      char *ptr ="Itisha";
      printf("%s",ptr);
     return 0;
}*/


/*int input(char str[],int n){
      int ch,i=0;
while((ch=getchar()) !='\n')
     if(i<n)
     str[i++]=ch;
str[i]='\0';
return i;

 }
int main(int argc, char const *argv[])
{
      char str[100];
      int n=input(str,5);
      printf("%d %s",n,str);


     return 0;
}

*/

//PRINT ALPHABET LETTERS

/*int main(int argc, char const *argv[])
{
      int ch;
      for(ch='A';ch<='Z';ch++){
            putchar(ch);
      }
          
     return 0;
}
*/

//STRCPY()

/*int main(int argc, char const *argv[])
{
     char str1[10]="Itisha";
     char str2 [10];

     printf("%s\n",strcpy(str2,str1));
     printf("%s",str2);
     return 0;
}
*/

/*int main(int argc, char const *argv[])
{
      char str1[7]="Itisha";
      char str2[4];

      strncpy(str2,str1,sizeof(str2));
      printf("%s",str2);
     return 0;
}
*/
/*int main()
{
      char str1[7]="Itisha";
      char str2[4];

      strcpy(str2,str1,sizeof(str2));
      printf("%s",str2);
     return 0;
}*/

/*int main()
{
      char str1[7]="Itisha";
      char str2[4];

      strncpy(str2,str1,sizeof(str2));
      str2[sizeof(str2)-1]='\0';
      printf("%s",str2);
     return 0;
}
*/

//strlen

/*int main(int argc, char const *argv[])
{
      //char *str="Hello world!";
      //char str[]="Hello world!";
      char str[13]="Hello world!";
      //char str[120]="Hello world!";

      printf("%d",strlen(str));

     return 0;
}

*/

//STRCAT(str)

/*int main()
{
      char str1[15],str2[100];

      strcpy(str1,"welcome to ");
      strcpy(str2,"the academy");
      strcat(str1,str2);
      printf("%s",str1);
     return 0;
}
*/
/*int main(int argc, char const *argv[])
{
      char str1[15],str2[100];

      strcpy(str1,"welcome to ");
      strcpy(str2,"the academy");
      strncat(str1,str2,5);
      printf("%s",str1);
     return 0;
}*/

//STRCMP:

/*int main(int argc, char const *argv[])
{
      char *s1="Itisha";
      char *s2="Itihas";

      if(strcmp(s1,s2)<0)
          printf("S1 is less than s2!\n");
     else 
          printf("s1 is greater or equal to s2!\n");
     return 0;
}*/

/*int main(int argc, char const *argv[])
{
      char *s1="abce";
      char *s2="bbce";

      if(strcmp(s1,s2)<0)
          printf("S1 is less than s2!\n");
     else 
          printf("s1 is greater or equal to s2!\n");
     return 0;
}
*/

/*int main(int argc, char const *argv[])
{
      char *s1="Itisha";
      char *s2="Itisha";

      if(strcmp(s1,s2)<0)
          printf("S1 is less than s2!\n");
     else 
          printf("s1 is greater or equal to s2!\n");
     return 0;
}
*/
 


//what will be the output of the following programme GATE 2011

/*int main(int argc, char const *argv[])
{
     char p[20];
     char *s = "string";
     int length=strlen(s);

     int i;
     for(i=0; i<length; i++)
     {
          p[i]=s[length - i];
          
     }
      printf("%s",p);
     return 0;
}
*/
//GATE 2011

/*int main(int argc, char const *argv[])
{
      char c[]="GATE2011";
      char *p=c;
      printf("%s",p+p[3]-p[1]);

     return 0;
}
*/




