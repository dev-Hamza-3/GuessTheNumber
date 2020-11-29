#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    srand(time(NULL));
    int n=101;
    int x = rand()%100;
    printf("\nDevinez le nombre entre 1 et 100!\n");
    while(x!=n)
    {
        scanf("%d",&n);
        if(n>x)
            printf("Plus petit !\n");
        if(n<x)
            printf("Plus grand !\n");
    }
    printf("BRAVO !!!");
    return 0;
}
