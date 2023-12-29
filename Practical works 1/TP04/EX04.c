#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX04.a:
   /* int hour, minute, second;
    printf("Enter the hours: ");
    scanf("%d", &hour);
    printf("Enter the minutes: ");
    scanf("%d", &minute);
    printf("Enter the seconds: ");
    scanf("%d", &second);
    printf("The time is %02d:%02d:%02d\n", hour, minute, second);

    second= second+1 ;
    if (second == 60) {
        second = 0;
        minute= minute+1;
        if (minute == 60) {
            minute = 0;
            hour = hour+1;
            if (hour == 24) {
                hour = 0;
            }
        }
    }
    printf("The time is %02d:%02d:%02d\n", hour, minute, second);

    PrintHello();*/



   //EX04.b:
   /* int hours, minutes, seconds, TimeSeconds;
    printf("Enter the number of TimeSeconds: ");
    scanf("%d", &TimeSeconds);
    hours = TimeSeconds / 3600;
    TimeSeconds = TimeSeconds % 3600;
    minutes = TimeSeconds / 60;
    seconds = TimeSeconds % 60;
    printf("The time is: %d hour(s) %d minute(s) %d second(s)\n", hours, minutes, seconds);*/


    //EX04.c:
    int DH, DM, AH, AM, FH, FM, DMs, AMs, FMs;
    printf("Enter the departure time H:M   ");
    scanf("%d %d", &DH, &DM);
    printf("Enter the arrival time H: M");
    scanf("%d %d", &AH, &AM);
    DMs = DH * 60 + DM;
    AMs = AH * 60 + AM;
    if (AMs >= DMs) {
        FMs = AMs - DMs;}
    else {
        FMs = (24 * 60 - DMs) + AMs;}
    FH = FMs / 60;
    FM = FMs % 60;
    printf("The flight time is: %02d hours %02d minutes", FH, FM);


    return 0;
}
