#include <stdio.h>

//This Programme Is Created By Harshwardhan (219301337).


int main() {
	int pass, x=10;	

	while (x!=0)
	{
	printf("\n\n\n\n\n\nInput the password: ");
	scanf("%d",&pass);	
	
	if (pass==1234)
	{
		printf("Correct password\n\n\n\n");
		x=0;
    }
    else
    {
       printf("Wrong password, try another");       
	}
	printf("\n");
   }
	return 0;
} 