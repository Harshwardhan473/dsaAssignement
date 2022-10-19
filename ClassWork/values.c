#include <stdio.h>
void values(int p, int q, int r, int s){
    if(q > r && s > p && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
    {
        printf("CORRECT VALUES\n\n\n");
    }
    else
    {
        printf("WRONG VALUES\n\n\n\n");
    }
}
//This Programme Is Created By Harshwardhan (219301337).

void main(){
    int p, q, r, s;
    printf("\n\n\n\nInput the first integer: ");
    scanf("%d", &p);
    printf("Input the second integer: ");
    scanf("%d", &q);
    printf("Input the third integer: ");
    scanf("%d", &r);
    printf("Input the fourth integer: ");
    scanf("%d", &s);

    values(p,q,r,s);
}