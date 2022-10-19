#include <stdio.h>

void print(int lines){
    int i, j = 1, x = 0;
    for(i = 1; i <= lines; i++) {
		while(x < 3) {
			printf("%d ", j++);
			x++;
		}
		x = 0;
		printf("\n");
	}
    printf("\n\n\n\n\n\n");

}

//This Programme Is Created By Harshwardhan (219301337).

void main() {
	int lines;
	printf("\n\n\n\n\nInput number of lines: ");
	scanf("%d", &lines);
    print(lines);
}