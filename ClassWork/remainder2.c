#include <stdio.h>

void cal(int x, int y){
    int temp, i, sum=0;
      if(x > y) 
	{
		temp = y;
		y = x;
		x = temp;
	}
	
	for(i = x+1; i < y; i++) 
	{
		if((i%7) == 2 || (i%7) == 3) {
			printf("%d\n", i);
		}
	}
	printf("\n\n\n\n");
}

//This Programme Is Created By Harshwardhan (219301337).

void main() {
		
	int x, y;
    printf("\n\n\n\n\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);	

    cal(x,y);
}