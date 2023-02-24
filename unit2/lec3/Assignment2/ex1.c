/*
    ex1.c
    Write C Program to check whether a number is even or odd
    Created on 24/2/2023
    Auther : Esraa abdelgaber

*/
#include<stdio.h>
int main()
{
    printf("Enter an integer you want to check: ");
    int a;
    scanf("%d", &a);
    fflush(stdin);
    fflush(stdout);
    if (a&1)
        printf("%d is odd.",a);
    else
        printf("%d is even.", a);

    return 0;
}
