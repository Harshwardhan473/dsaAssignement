#include <stdio.h>

void calculation(int id, float hours, float amount){
    float salary = hours*amount;
    printf("\nEmployee Id is: %d\n", id);
    printf("The total Salary is: %0.2f\n\n\n\n\n", salary);
}

//This Program Is Created By Harshwardhan (219301337)

void main(){
    int id;
    float hours;
    float amount;

    printf("\n\n\n\nEnter the Employee ID: ");
    scanf("%d", &id);
    printf("Enter the Number of hours worked: ");
    scanf("%f", &hours);
    printf("Enter the wage per hour: ");
    scanf("%f", &amount);

    calculation(id, hours, amount);
}