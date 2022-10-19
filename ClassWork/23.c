#include <stdio.h>

void print(int num1,int num2){
    int i ,j, l;
    for(i = 1, l=1; i <= num1; i++) 
	  {
		for(j = 1; j <= num2; j++) 
	 	{
		  printf("%d ",l);		
		  l++; 
			}
			printf("\n");
		}
printf("\n\n\n\n\n\n");
}

//This Programme Is Created By Harshwardhan (219301337).

void main() {
	int x, y;
	printf("\n\n\n\n\n\nInput number of lines: ");
	scanf("%d", &x);
	printf("Number of numbers in a line: ");
    scanf("%d", &y);

    print(x,y);
	
	
  
}