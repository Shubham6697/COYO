#include<stdio.h>
int main()
{
    struct emp
    {

        char name[20];
        int age;
        float sal;

    };
    struct emp e={"Tiger};
    printf("%d, %f",e.age,e.sal);
    return 0;
}
