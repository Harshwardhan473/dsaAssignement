#include <stdio.h>

//This Programme Is Created By Harshwardhan (219301337).


  int main() {
    int a, ctr = 0, min_num, max_num, s = 0;
    double avg;
    printf("\n\n\n\n\n\n\n\n");
    printf("Input a positive integer: ");
    scanf("%d", &a);
    if (a <= 0) 
    {
      printf("No positive number entered\n");
      return 0;
    }
    min_num = a;
    max_num = a;
    while (a > 0) {
      s += a;
      ctr++;
      max_num = a > max_num ? a : max_num;
      min_num = a < min_num ? a : min_num;
      printf("Input next positive integer: ");
      scanf("%d", &a);
      
    }
    printf("\n");
    avg = s / (double) ctr;
    printf("Number of positive values entered is %d\n", ctr);
    printf("Maximum value entered is %d\n", max_num);
    printf("Minimum value entered is %d\n", min_num);
    printf("Average value is %0.4lf\n", avg);
     printf("\n\n\n\n\n\n\n\n");
    return 0;
  }