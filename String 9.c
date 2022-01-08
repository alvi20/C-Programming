#include<stdio.h>
int main()
{
    char str1[]="Diego Armando Maradona";
    char str2[]="is the god of football";


    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }







}
