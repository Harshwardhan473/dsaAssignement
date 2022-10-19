#include <stdio.h>

void QuadCheck(int x, int y){
    if(x > 0 && y > 0) 
		{
			printf("Quadrant: I (+,+)\n\n\n\n\n\n");
		} 
		else if(x> 0 && y < 0) 
		{			
		   	printf("Quadrant: II (+,-)\n\n\n\n");
		} 
		else if(x < 0 && y < 0) 
		{
				printf("Quadrant: III (-,-)\n\n\n\n");
		} 
		else if(x < 0 && y > 0) 
		{
			printf("Quadrant: IV (-,+)\n\n\n\n\n");
		}
}

//This Programme Is Created By Harshwardhan (219301337).

void main() 
{
	int x, y;
    printf("\n\n\n\n\nInput the Coordinate (x,y) below ");
	printf("\nx: "); 
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
	QuadCheck(x, y);
}