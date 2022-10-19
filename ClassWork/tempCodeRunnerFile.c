#include<stdio.h>
void cpy(char arr[1000])
{
    char cst[1000];
    int c=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        cst[i]=arr[i];
        if (cst[i]!='\0')
        {
            c++;
        }
    }
    printf("size :%d",c);
}

//This Programme Is Created By Harshwardhan (219301337).
void main()
{
    char arr[1000];
    printf("Enter string :");
    gets(arr);
    cpy(arr);
}