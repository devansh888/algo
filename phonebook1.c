#include<stdio.h>
#include<cs50.h>
#include<string.h>

typedef struct
{
    string name;
    string phone;
}

person;

int main(void)
{
    person people[2];

    people[0].name = "dev";
    people[0].phone = "+456789123";

    people[1].name = "vege";
    people[1].phone = "123456789";

    for(int i =0; i<2; i++)
    {
        if(strcmp(people[i].name, "vegee") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}