#include <stdio.h>

//This Programme Is Created By Harshwardhan (219301337).

void main(){
    
    int arr[5], i;
    printf("\n\n\n\n");
    for(i = 0; i < 5; i++)   
   {    
    printf("Enter the arr[%d] element: ", i ); 
    scanf("%d", &arr[i]);   
    }  

    int sum =0;
     for(int i = 0; i < 5; i++)   
   {    
        if(arr[i]%2 != 0)        
        {            
        sum = sum + arr[i];        
        }   
    }  

printf("\nThe sum of odd numbers = %d\n\n\n\n\n",sum);   

}