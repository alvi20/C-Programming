
#include<stdio.h>
int main()
{
    char s1[60]="Marc Andree Ter Stegan";
    char s2[60];

    int i=0,j,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }


    for(j=0,i=len-1;i>=0;i--,j++)

    {

        s2[j]=s1[i];


    }
    s2[j]='\0';

    printf("String=%s\n",s1);
    printf("String=%s\n",s2);

    int d=strcmp(s1,s2);

    if(d==0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    getch();
}
