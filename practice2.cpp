#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student 
{
    char name[20];
    int roll;
};

void struct_func(struct student *s1, struct student *s2)
{
    strcpy(s2->name, s1->name);
    s2->roll = s1->roll;
    printf("Name:- %d", s2->roll);
    printf("Roll:- %s", s2->name);
}

int main()
{
    struct student *s1 = (struct student *)malloc(sizeof(struct student));
    struct student *s2 = (struct student *)malloc(sizeof(struct student));

    printf("ENter Name:- ");
    scanf("%s", &s1->name);
    printf("Enter Name:- ");
    scanf("%d", &s1->roll);

    struct_func(s1, s2); 
}