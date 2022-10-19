#include<stdio.h>
const float pi = 3.14;

void perimeter(float radius){
    float peri = 2*pi*radius;
    printf("The Perimeter is: %0.2f cm\n", peri);
}

void area(float radius){
    float ar = pi*radius*radius;
    printf("The Area is: %0.2f cm\n\n\n\n\n", ar);
}

//This Program Is Created By Harshwardhan (219301337)

void main(){
    float radius;
    printf("\n\n\nEnter the Radius: ");
    scanf("%f", &radius);

    perimeter(radius);
    area(radius);
}