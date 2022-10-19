#include <stdio.h>
const float Ydays = 365;
const float Wdays = 7;

void year(float days){
    float ans = days/Ydays;
    printf("%.0f days is about %0.2f Years\n" , days, ans);
}

void week(float days){
    float ans = days/Wdays;
    printf("%.0f days is about %0.2f Weeks\n\n\n\n\n" , days, ans);
}

//This Program Is Created By Harshwardhan (219301337)

void main(){
    float days;
    printf("\n\n\n\n\nEnter the number of days you wish to convert: ");
    scanf("%f", &days);
    year(days);
    week(days);
}

