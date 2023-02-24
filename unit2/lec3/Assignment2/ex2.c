/*
    ex2.c
    Write C Program to check volwel or consonant 
    Created on 24/2/2023
    Auther : Esraa abdelgaber

*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c", &a);
    fflush(stdin);
    fflush(stdout);
    if (a=='i'||a=='a'||a=='e'||a=='o'||a=='u' ||a=='I'||a=='A'||a=='E'||a=='O'||a=='U')
        printf("%c is a vowel.",a);
    else
        printf("%c is a consonant.",a);
}
