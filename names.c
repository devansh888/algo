#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names[] = {"dev", "ram", "shyam" , "ramesh",};

    for(int i = 0; i<4; i++)
    {
        if(strcmp(names[i], "ram"))
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("not found\n");

    return 1;
}