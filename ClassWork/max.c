#include <stdio.h>
//This Programme Is Created By Harshwardhan (219301337).

int main() 
{    
    int MAX = 0;
    printf("\n\n\n\n\n\nEnter the number of inputs you wish to check: ");
    scanf("%d",&MAX);
	int number[MAX], i, j, max=0, num_pos=0;
	printf("Input %d integers: \n", MAX);
	for(i = 0; i < MAX; i++) {
		scanf(" %d", &number[i]);
	}
	
	for(j = 0; j < MAX; j++) 
	{
		if(number[j] > max) {
			max = number[j];
			num_pos = j;
		}
	}
	printf("Highest value: %d\nPosition: %d\n\n\n\n\n\n\n", max, num_pos+1);
	return 0;
}