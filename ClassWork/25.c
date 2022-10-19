#include <stdio.h>

//This Programme Is Created By Harshwardhan (219301337).

void main() {
	double sum=0, a=1, b, i;

	for(i=1; i<=7; i+=2){
		
		b = (i/a);
		sum += b;
		a = a*2;
	}
    printf("\n\n\n\n\nValue of series: %.2lf\n\n\n\n\n\n", sum);
   
}