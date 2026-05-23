#include<cstdio>
#include<iostream>
#include<string>

long labs(long input){return (input < 0) ? -input : input;}

int main(){

    long n, m, s, f; scanf("%ld %ld %ld %ld\n", &n, &m, &s, &f);

    long holder(s), dir(0); char move;
    if(s < f){dir = 1; move = 'R';} else{dir = -1; move = 'L';}

    long currentTime(0);
    bool done(0);
    for(int k = 0; k < m; k++){
        long t, l, r; scanf("%ld %ld %ld\n", &t, &l, &r);
        ++currentTime;

        if(currentTime < t){
            long meantime = t - currentTime;
            if(meantime >= labs(f - holder)){meantime = labs(f - holder);}
            std::string breakMoves(meantime, move); std::cout << breakMoves;
            holder += dir * meantime; currentTime = t;
        }


        if(holder == f){break;}
        if((dir > 0 && l - 1 <= holder && holder <= r) || (dir < 0 && l <= holder && holder <= r + 1)){printf("X");}
        else{printf("%c", move); holder += dir;}
        if(holder == f){done = 1; break;}
    }

    if(!done){std::string moreMoves(labs(f - holder), move); std::cout << moreMoves;}
    puts("");

    return 0;
}
