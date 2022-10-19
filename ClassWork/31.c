#include<stdio.h>

void print(int num){
    int a,num2 =0;
    printf("\nThe original number = %d",num);
    while(num>=1)
 {
    a=num%10;
    num2=num2*10+a;
    num=num/10;
 }
printf("\nThe reverse of the said number = %d",num2);

printf("\n\n\n\n\n\n\n\n");

}

//This Programme Is Created By Harshwardhan (219301337).


void main()
{
    int num;
    printf("\n\n\n\n\n\nInput a number: ");
    scanf("%d",&num);
    print(num);
}