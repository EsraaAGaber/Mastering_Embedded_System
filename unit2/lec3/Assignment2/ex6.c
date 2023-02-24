/*
    ex6.c
    Write C Program to calculate sum of natural numbers 
    Created on 24/2/2023
    Auther : Esraa abdelgaber

*/
#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum = %d", sum);
}
