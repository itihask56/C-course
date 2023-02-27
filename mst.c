#include <stdio.h>
int var = 20;

int main(int argc, char const *argv[])
{
    int y = 2;
    int z = y + (y = 10);
    printf("%d", z);
}
