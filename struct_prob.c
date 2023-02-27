#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
    /*struct student
    {
        char *name;
    };
    struct student s;
    struct student fun(void)
    {
        s.name = "newton";
        printf("%s\n", s.name);
        s.name = "alan";
        return s;
    }
    void main()
    {
        struct student m = fun();
        printf("%s\n", m.name);
        m.name = "turing";
        printf("%s\n", s.name);
    }*/

/*struct student
    {
        char *name;
    };
    void main()
    {
        struct student s, m;
        s.name = "st";
        m = s;
        printf("%s%s", s.name, m.name);
    }
    */

   /*struct temp
    {
        int a;
    } s;
    void func(struct temp s)
    {
        s.a = 10;
        printf("%d\t", s.a);
    }
    int main()
    {
        func(s);
        printf("%d\t", s.a);
    }*/

    /*struct student
    {
        char *name;
    };
    struct student fun(void)
    {
        struct student s;
        s.name = "alan";
        return s;
    }
    void main()
    {
        struct student m = fun();
        s.name = "turing";
        printf("%s", m.name);
    }*/

    /* struct point
    {
        int x;
        int y;
    };
    int main()
    {
        struct point p = {1};
        struct point p1 = {1};
        if(p == p1)
            printf("equal\n");
        else
            printf("not equal\n");
    }*/

    /*struct point
    {
        int x;
        int y;
    };
    struct notpoint
    {
        int x;
        int y;
    };
    struct point foo();
    int main()
    {
        struct point p = {1};
        struct notpoint p1 = {2, 3};
        p1 = foo();
        printf("%d\n", p1.x);
    }
    struct point foo()
    {
        struct point temp = {1, 2};
        return temp;
    }*/

    /*struct point
    {
        int x;
        int y;
    };
    struct notpoint
    {
        int x;
        int y;
    };
    int main()
    {
        struct point p = {1};
        struct notpoint p1 = p;
        printf("%d\n", p1.x);
    }*/

    /*struct point
    {
        int x;
        int y;
    };
    struct notpoint
    {
        int x;
        int y;
    };
    void foo(struct point);
    int main()
    {
        struct notpoint p1 = {1, 2};
        foo(p1);
    }
    void foo(struct point p)
    {
        printf("%d\n", p.x);
    }*/

    /*struct point
    {
        int x;
        int y;
    };
    void foo(struct point*);
    int main()
    {
        struct point p1 = {1, 2};
        foo(&p1);
    }
    void foo(struct point *p)
    {
        printf("%d\n", *p.x++);
    }
*/


/*struct point
    {
        int x;
        int y;
    };
    void foo(struct point*);
    int main()
    {
        struct point p1 = {1, 2};
        foo(&p1);
    }
    void foo(struct point *p)
    {
        printf("%d\n", *p->x++);
    }*/


    /*struct student fun(void)
    {
        struct student
        {
            char *name;
        };
        struct student s;
        s.name = "alan";
        return s;
    }
    void main()
    {
        struct student m = fun();
        printf("%s", m.name);
    }*/

    struct student
    {
        char *name;
    };
    struct student fun(void)
    {
        struct student s;
        s.name = "alan";
        return s;
    }
    void main()
    {
        struct student m = fun();
        printf("%s", m.name);
    }