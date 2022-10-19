#include<stdio.h>

void cal(float weight1, float num1, float weight2, float num2){
    float result = ((weight1 * num1) + (weight2 * num2)) / (num1 + num2);
	printf("Average Cost of one product = %.2f\n\n\n\n", result);
}
//This Program Is Created By Harshwardhan (219301337)

void main(){
    float weight1;
    float num1;
    float weight2;
    float num2;

    printf("\n\n\n\nEnter the number of items in bag 1: ");
    scanf("%f", &num1);
    printf("Enter the total weight of bag 1: ");
    scanf("%f", &weight1);
    printf("Enter the number of items in bag 2: ");
    scanf("%f", &num2);
    printf("Enter the total weight of bag 2: ");
    scanf("%f", &weight2);

    cal(weight1, num1, weight2, num2);

}