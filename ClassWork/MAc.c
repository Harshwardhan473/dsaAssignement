#include <stdio.h>
void max(int one, int two, int three){
    
    int num = 0;
    if(one>=two)
    {
        num = one;
        }
    else if (one<=two)
    {
        num = two;
        }
    if(three>num)
    {
        printf("\nThe Greatest Number is: %d\n\n\n\n", three); 
        }
    else{

        printf("\nThe Greatest number is: %d\n\n\n\n", num);
        }
}

//This Program Is Created By Harshwardhan (219301337)

void main(){
    int one; 
    int two; 
    int three;

    printf("\n\n\n\nEnter the first Number: ");
    scanf("%d", &one);
    printf("Enter the Second Number: ");
    scanf("%d", &two);
    printf("Enter the Third Number: ");
    scanf("%d", &three);

    max(one, two, three);

}
    


