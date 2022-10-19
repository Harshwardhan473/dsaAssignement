#include <stdio.h>

void time(int sec){
    int hours, minutes, seconds;
    hours = (sec/3600); 
	minutes = (sec -(3600*hours))/60;
	seconds = (sec -(3600*hours)-(minutes*60));

    printf("\n%d in hours is %d hours", sec,hours);
    printf(" and %d minutes", minutes);
    printf(" and %d seconds\n\n\n\n", seconds);

}

//This Programme Is Created By Harshwardhan (219301337).

void main(){
    int sec;
    printf("\n\n\n\nInput seconds: ");
	scanf("%d", &sec);
    time(sec);
}