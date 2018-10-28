#include <cstdio>

int main(){

    const int monthDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int yearA(0), monthA(0), dayA(0); scanf("%d:%d:%d\n", &yearA, &monthA, &dayA);
    int yearB(0), monthB(0), dayB(0); scanf("%d:%d:%d\n", &yearB, &monthB, &dayB);


    double order = 10000.0 * (yearB - yearA) + 100.0 * (monthB - monthA) + (dayB - dayA); 

    if(order < 0){
        int temp(0);
        temp = yearA; yearA = yearB; yearB = temp;
        temp = monthA; monthA = monthB; monthB = temp;
        temp = dayA; dayA = dayB; dayB = temp;
    }

    long total(0);
    
    for(int currentYear = yearA; currentYear <= yearB; currentYear++){
        int currentLength(0);
        if(currentYear % 400 == 0){currentLength = 366;}
        else if(currentYear % 100 == 0){currentLength = 365;}
        else if(currentYear % 4 == 0){currentLength = 366;}
        else{currentLength = 365;}
        total += currentLength;
    
        if(currentYear == yearA){
            for(int currentMonth = 1; currentMonth < monthA; currentMonth++){
                if(currentMonth == 2 && currentLength == 366){total -= 29;}
                else{total -= monthDays[currentMonth];}
            }
            total -= dayA;
        }

        if(currentYear == yearB){
            for(int currentMonth = monthB; currentMonth <= 12; currentMonth++){total -= monthDays[currentMonth];}
            total += dayB;
            if(currentLength == 366 && monthB <= 2){--total;}
        }

    }

    printf("%ld\n", total);

    return 0;
}
