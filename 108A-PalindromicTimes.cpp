#include <cstdio>

int main(){

    int hours(0), minutes(0); scanf("%d:%d", &hours, &minutes);
    int nextMinutes = 10 * (hours % 10) + (hours / 10);
    if(nextMinutes <= minutes || nextMinutes > 59){++hours; if(hours % 10 > 5){hours -= hours % 10; hours += 10;} hours %= 24;}
    nextMinutes = 10 * (hours % 10) + (hours / 10);
    printf("%d%d:%d%d\n", hours/10,hours%10, nextMinutes/10,nextMinutes%10);
    return 0;
}
