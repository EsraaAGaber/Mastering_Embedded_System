/*
    ex7.c
    Write Source Code to Swap Two Numbers without temp variable.
    Created on 24/2/2023
    Auther : Esraa abdelgaber

*/
#include <stdio.h>
int main()
{
    float  a, b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    fflush(stdin);
    fflush(stdout);
    printf("Enter value of b: ");
    scanf("%f", &b);
    fflush(stdin);
    fflush(stdout);
    ///a+b b --> a+b   a   -->b  a
    a += b;
    b = a - b;
    a -= b;
    printf ("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);
    return 0;
}
