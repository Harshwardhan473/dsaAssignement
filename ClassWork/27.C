#include <stdio.h>
#include <conio.h>
 
void input(int *a,int n)
{ 
    int i;
	for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    } 
}
     
void output(int *a,int n)
{ 
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\n\n\n\n\n"); 
}
 
 //This Programme Is Created By Harshwardhan (219301337).
 
int main()
{
    int a[1000],i,n;  
    printf("\n\n\n\n\n\nEnter size of array: ");
    scanf("%d",&n);
    
    printf("Enter %d elements in the array :\n", n);
    input(a,n);

    printf("\nElements in array are: ");
    output(a,n);

    return 0;
}