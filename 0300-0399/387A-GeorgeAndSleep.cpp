#include <cstdio>

int main(){

    int wakeHour(0), wakeMinute(0); scanf("%d:%d", &wakeHour, &wakeMinute);
    int sleepHour(0), sleepMinute(0); scanf("%d:%d", &sleepHour, &sleepMinute);

    int bedHour = wakeHour - sleepHour;
    int bedMinute = wakeMinute - sleepMinute;

    if(bedMinute < 0){bedMinute += 60; bedHour -= 1;}
    if(bedHour < 0){bedHour += 24;}

    if(bedHour < 10){printf("0");};   printf("%d:", bedHour);
    if(bedMinute < 10){printf("0");}; printf("%d\n", bedMinute);

    return 0;
}
