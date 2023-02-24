/*
    ex3.c
    Write C Program to find  the largest number 
    Created on 24/2/2023
    Auther : Esraa abdelgaber

*/
#include<stdio.h>
int main()
{
    printf("Enter three numbers: ");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    fflush(stdin);
    fflush(stdout);
    if (a>b)
        b = a;
    if (b>c)
        c = b;
    printf("Largest number = %f",c);
    return 0;
}
