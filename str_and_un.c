#include <stdio.h>

struct employee1
{
    int id;
    int salary;
    char post[50];
    char name[50];
    int officeid[20];
};
union employee2
{
    int id2;
    int salary2;
    char post2[50];
    char name2[50];
    int officeid2[20];
};
int main()
{
    struct employee1 data;
    union employee2 data2;
    printf("The size of integer id is %lu \n", sizeof(data.id));
    printf("The size of integer officeid is %lu \n", sizeof(data.officeid));
    printf("The size of char name is %lu \n", sizeof(data.name));
    //  size of structure and union//
    printf("The size of structure is %lu \n", sizeof(data));
    printf("The size of union is %lu \n", sizeof(data2));
    return 0;
}