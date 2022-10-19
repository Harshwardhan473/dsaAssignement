#include <stdio.h>

void mileage(int dis, float fuel){
    float ans = dis/fuel;
    printf("\nBikes Average Consumption is %.2f liters per Kilometer\n\n\n\n\n", ans);
}

//This Program Is Created By Harshwardhan (219301337)

void main(){
    int dis;
    float fuel;

    printf("\n\n\nEnter the total distance: ");
    scanf("%d", &dis);
    printf("Enter the liters of fuel consumed: ");
    scanf("%f", &fuel);

    mileage(dis, fuel);
}