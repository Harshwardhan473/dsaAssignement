#include <stdio.h>

void check(int x, int y){
    int temp,i,sum=0;
    if(x > y) {
		temp = y;
		y = x;
		x = temp;
	}
	for(i = x; i <= y; i++) {
		if((i % 17) != 0) {
			sum += i;
		}
    }
	printf("\nSum: %d\n\n\n\n\n", sum);
	
}
//This Programme Is Created By Harshwardhan (219301337).

void main() {
		
	int x, y;
    printf("\n\n\n\n\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);

    check(x,y);	
	
}