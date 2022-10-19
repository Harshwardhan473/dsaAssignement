#include <stdio.h>

void print(int num){
    int i, j = 1, x = 0;
    for(i = 1; i <= num; i++) {
		printf("%d %d %d\n", i, i*i, i*i*i);
	  }
printf("\n\n\n\n\n\n\n");

}

//This Programme Is Created By Harshwardhan (219301337).

void main() {
	int num;
	printf("\n\n\n\n\nInput number of lines: ");
	scanf("%d", &num);
    print(num);
	
    
}