#include <stdio.h>
void div(int num){
    int i;
    for(i = 1; i <= num; i++) {
		if((num%i) == 0){
			printf("\n%d", i);
		}
	}
    printf("\n\n\n\n\n");
}

//This Programme Is Created By Harshwardhan (219301337).

void main() {
	int num;
	printf("\n\n\n\n\n\nInput an integer: ");
	scanf("%d", &num);
	printf("All the divisor of %d are: ", num);
    div(num);
}