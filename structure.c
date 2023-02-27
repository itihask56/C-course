 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include<conio.h>
/* struct {
     char *engine;
     char *fuel_Type;
     int fuelTankCapacity;
     int seatCapacity;

 } car1, car2;

 int main( )
 {
      car1.engine="ddis 190";
      car2.engine="111.2 L kappa";
      printf("%s\n", car1.engine);
      printf("%s\n", car2.engine);
     return 0;
 }
 */

/*struct {
    char *namee;
    int age;
    int salary;
} emp1,emp2;

int manager(){
    struct{
        char *namee;
        int age;
        int salary;
    }manager;
    manager.age=27;

    if(manager.age>30)
        manager.salary=30000;
    else   
        manager.salary=55000;
    return manager.salary;
}

int main(int argc, char const *argv[])
{
     printf("Enteer salary of emp1:");
     scanf("%d",&emp1.salary);
     printf("Salary of emp2:");
     scanf("%d",&emp2.salary);
     printf("Emp1 salary is : %d\n\n",emp1.salary);
     printf("Emp2 salary is : %d\n",emp2.salary);
     printf("manager salary is : %d\n",manager());
     //printf("manager salary is : %d\n",manager.salary);

    return 0;
}
*/

/*struct employee {
    char *namee;
    int age;
    int salary;
};

int manager() {
    struct employee manager;  
    manager.age=27;

    if(manager.age>30)
        manager.salary=30000;
    else   
        manager.salary=55000;
    return manager.salary;
}

int main(int argc, char const *argv[])
{
    struct employee emp1;
    struct employee emp2;

     printf("Enteer salary of emp1:");
     scanf("%d",&emp1.salary);
     printf("Salary of emp2:");
     scanf("%d",&emp2.salary);
     printf("Emp1 salary is : %d\n\n",emp1.salary);
     printf("Emp2 salary is : %d\n",emp2.salary);
     printf("manager salary is : %d\n",manager());
     //printf("manager salary is : %d\n",manager.salary);

    return 0;
}
*/


// Desugnated Initialization : allows structure members to be initialized in any order
/*struct abc{
    int x;
    int y;
    int z;

};

int main(int argc, char const *argv[])
{
     struct abc a={.y=10,.x=20,.z=30};
     printf("%d%d%d",a.x,a.y,a.z);
    return 0;
}
*/

//Array of structure: Instead of declaring miltiple variables, we can also declare
//an array of structures in which each element of the array will reprent
// astructure variable.

//Structure Padding

/*struct abc{
    char a;
    char b;
    int c;

};
int main(int argc, char const *argv[])
{
     struct abc var;
     printf("%d",sizeof(var));
   
}
*/

/*struct abc{
    char a;
     
    int c;
    char b;

};
int main(int argc, char const *argv[])
{
     struct abc var;
     printf("%d",sizeof(var));
   
}*/


// STRUCTURE PACKING
//we can avoid the wastage memory by simply writing #pagma pack(1)

/*#pragma pack(1)
struct abc{
    char a; 
    int c;
    char b;

};
int main(int argc, char const *argv[])
{
     struct abc var;
     printf("%d",sizeof(var));
   
}
*/

// UNION : IT is a uddt but unlike structure, union members share the same
//memory location and

/*struct abc{
    int a;
    char b;
};
int main(int argc, char const *argv[])
{
     struct abc var=10;
     printf("%d",&var);
    return 0;
}
*/

/*union abc{
    int a;
    char b;

}var;
int main(int argc, char const *argv[])
{
     var.a=65;
     printf("%d\n",var.a);
     printf("%c\n",var.b);
    return 0;
}
*/

//DECIDING THE SIZE OF UNION
/*union abc{
    int a;
    char b;
    float c;
    double d;
};
int main(int argc, char const *argv[])
{
     printf("%ld",sizeof(union abc));
    return 0;
}*/

// ACCEING MEMBERS USING POINTRS
//WE CAN ACCESS MEMBERS OF UNION UING  ARROW ->

/*union abc{
    int a;
    char b;

};
int main(int argc, char const *argv[])
{
     union abc var;
     var.a=90;
     union abc *p=&var;
     printf("%d %c",p->a,p->b);
    return 0;
}*/


//Passing structure members as arguments

/*struct student{
    char name[50];
    int roll;
    int age;
    float marks;
};

void print(char name[],int roll,int age,float marks){
    printf("%s %d %d %.2f",name,roll,age,marks);
}

int main(int argc, char const *argv[])
{
     struct student s1={"Itihas",1,20,90.2};
     print(s1.name,s1.roll,s1.age,s1.marks);
    return 0;
}
*/

//Passing structure variable as arguments

/*struct point{
    int x;
    int y;
};

void print(struct point p){
    printf("%d %d \n",p.x,p.y);
}

int main(int argc, char const *argv[])
{
     struct point p1={10,11};
     struct point p2={12,13};
     print(p1);
     print(p2);
    return 0;
}
*/

//Passing to pointer structure as arguments

/*struct point{
    int x;
    int y;
};

void print(struct point *p){
    printf("%d %d \n",p->x,p->y);
}

int main(int argc, char const *argv[])
{
     struct point p1={10,11};
     struct point p2={12,13};
     print(&p1);
     print(&p2);
    return 0;
}
*/


//Returning a structure variable from the function
//is similar to returning a variable from a function

 