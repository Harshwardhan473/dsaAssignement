#include <stdio.h>
#include <math.h>

void dis(float x1, float y1, float x2, float y2){
    float distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nThe distance between the two points is: %.2f\n\n\n\n", sqrt(distance));
}

//This Program Is Created By Harshwardhan (219301337)

void main(){
    float x1, y1, x2, y2, distance;
   printf("\n\n\n\nInput x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
    printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);

    dis(x1,y1,x2,y2);

}

