#include <cstdio>

int main(){

    int a, b, c, d; scanf("%d %d %d %d\n", &a, &b, &c, &d);

    int mishaScore = 3 * a / 10;
    if(a - a * c / 250 > mishaScore){mishaScore = a - a * c / 250;}

    int vasyaScore = 3 * b / 10;
    if(b - b * d / 250 > vasyaScore){vasyaScore = b - b * d / 250;}

    if(mishaScore < vasyaScore){puts("Vasya");}
    else if(mishaScore > vasyaScore){puts("Misha");}
    else if(mishaScore == vasyaScore){puts("Tie");}

    return 0;
}
