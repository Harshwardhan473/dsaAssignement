#include <stdio.h>

//This Programme Is Created By Harshwardhan (219301337).

int main() {
	int n[7], i, x;
	printf("\n\n\n\n\n\nInput the first number of the array:\n");

	scanf("%d", &x);
	for(i = 0; i < 7; i++) 
	{
		n[i] = x;
		x = 3*x;
	}

	for(i = 0; i < 7; i++)
	{
		printf("arr[%d] = %d\n", i, n[i]);
	}

    printf("\n\n\n\n\n\n\n\n");
	return 0;
}