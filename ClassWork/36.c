#include<stdio.h>
void ml(int n, int m)
{
    if (n%m==0)
    {
        printf("Yes, Int1 is multiple of Int 2. ");
    }
    else 
    {
        printf("NO, Int1 is not a multiple of Int2");
    }
}

//This Programme Is Created By Harshwardhan (219301337).

void main()
{
    int n,m;
    printf("Enter Int1:");
    scanf("%d",&n);
    printf("Enter Int:");
    scanf("%d",&m);
    ml(n,m);
}