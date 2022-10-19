#include<stdio.h>
void perimeter(int len, int bre){

    int sum = len + bre;
    int peri = (2*sum);
    printf("The Perimeter is: %d inches\n", peri);
}

void area(int len, int bre){
    int a = len*bre;
    printf("The Area is: %d inches\n", a);
}
//This Programme Is Created By Harshwardhan (219301337).

void main(){
    int len;
    int bre;

    printf("Enter the length: ");
    scanf("%d",&len);
    printf("Enter the breadth: ");
    scanf("%d",&bre);

    perimeter(len,bre);
    area(len,bre);
}