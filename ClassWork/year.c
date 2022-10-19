#include<stdio.h>

void print(int month){
    switch(month)
    {
        case 1: printf("\nJanuary\n\n\n\n\n");break;
        case 2: printf("\nFebruary\n\n\n\n\n\n"); break;
        case 3: printf("\nMarch\n\n\n\n\n\n"); break;
        case 4: printf("\nApril\n\n\n\n\n\n"); break;
        case 5: printf("\nMay\n\n\n\n\n\n"); break;
        case 6: printf("\nJune\n\n\n\n\n\n"); break;
        case 7: printf("\nJuly\n\n\n\n\n\n"); break;
        case 8: printf("\nAugust\n\n\n\n\n\n"); break;
        case 9: printf("\nSeptember\n\n\n\n\n\n"); break;
        case 10: printf("\nOctober\n\n\n\n\n\n"); break;
        case 11: printf("\nNovember\n\n\n\n\n\n"); break;
        case 12: printf("\nDecember\n\n\n\n\n\n"); break;
        default: printf("There does not exist any month");
    }
  }
//This Programme Is Created By Harshwardhan (219301337).

void main()
{
  
    int month;
    printf("\n\n\n\nInput a number between 1 - 12: ");
    scanf("%d", &month);
    print(month);
}