#include<stdio.h>

//This Programme Is Created By Harshwardhan (219301337).

void main() {
	int x, i;
	printf("\n\n\n\nInput an integer: ");
	scanf("%d", &x);
	printf("List of square of each one of the even values from 1 to a %d :\n",x);
	for(i = 2; i <= x; i++) {
		if((i%2) == 0) {
			printf("%d^2 = %d\n", i, i*i);
		}
	}

    printf("\n\n\n\n\n");
	
}
