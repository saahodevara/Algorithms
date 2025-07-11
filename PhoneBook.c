#include <stdio.h>
#include<string.h>

typedef struct{
    char name[20];
    char number[20];
} people;

int main(void)
{
    people person[2];
    char name[20];
    strcpy(person[0].name, "saaho");
    strcpy(person[0].number, "+91 xxxxx92");
    strcpy(person[1].name, "devara");
    strcpy(person[1].number, "+91 xxxxx72");

    printf("Enter your name :");
    scanf("%s",name);
    for(int i=0; i<2;i++)
    {
        if(strcmp(person[i].name,name) == 0)
        {
            printf("Found %s\n",person[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
    
}
