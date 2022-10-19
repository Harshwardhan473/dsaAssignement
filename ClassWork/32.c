#include <stdio.h>

void sum(int num){
    int i, j, sum_int = 0;
    if (num < 1 || num >= 100) {
      printf("Wrong input\n");
      return 0;
    }
    j = 1;
    for (i = 1; j <= num; i++) {
      sum_int += j * j * j * j;
      j += i;
    }
    printf("\nSum of the series is %d\n", sum_int);
    printf("\n\n\n\n\n\n\n");
}


  void main() {
    int num;
    printf("\n\n\n\n\n\nInput a positive number less than 100: ");
    scanf("%d", & num);
    sum(num);
    
  }