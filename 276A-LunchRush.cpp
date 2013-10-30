#include <iostream>
#include <cstdio>

int main(){
    long numPlaces, timeLimit; scanf("%ld %ld", &numPlaces, &timeLimit);
    long joy = 0, time = 0, newJoy = 0, maxJoy = -1000000000;
    while(numPlaces--){
        scanf("%ld %ld", &joy, &time);
        newJoy = (time < timeLimit) ? joy : joy - (time - timeLimit);    
        if(newJoy > maxJoy){maxJoy = newJoy;}
    }
    printf("%ld\n", maxJoy);
    return 0;
}
