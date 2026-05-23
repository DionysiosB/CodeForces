#include <cstdio>
#include <iostream>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n(0); scanf("%ld\n", &n);
    std::string first(""); getline(std::cin, first);
    std::string second(""); getline(std::cin, second);

    long firstLength(first.size()), secondLength(second.size());
    long firstScore(0), secondScore(0);

    long lcm = firstLength * secondLength / gcd(firstLength , secondLength);
    if(n >= lcm){
        for(long k = 0; k < lcm; k++){
            char firstMove(first[k % firstLength]), secondMove(second[k % secondLength]);
            if(firstMove == 'R' && secondMove == 'P'){++secondScore;}
            else if(firstMove == 'R' && secondMove == 'S'){++firstScore;}
            else if(firstMove == 'P' && secondMove == 'R'){++firstScore;}
            else if(firstMove == 'P' && secondMove == 'S'){++secondScore;}
            else if(firstMove == 'S' && secondMove == 'R'){++secondScore;}
            else if(firstMove == 'S' && secondMove == 'P'){++firstScore;}
        }

        firstScore *= (n/lcm); secondScore *= (n/lcm);
    }

    for(long k = 0; k < (n % lcm); k++){
        char firstMove(first[k % firstLength]), secondMove(second[k % secondLength]);
        if(firstMove == 'R' && secondMove == 'P'){++secondScore;}
        else if(firstMove == 'R' && secondMove == 'S'){++firstScore;}
        else if(firstMove == 'P' && secondMove == 'R'){++firstScore;}
        else if(firstMove == 'P' && secondMove == 'S'){++secondScore;}
        else if(firstMove == 'S' && secondMove == 'R'){++secondScore;}
        else if(firstMove == 'S' && secondMove == 'P'){++firstScore;}
    }

    printf("%ld %ld\n", secondScore, firstScore);

    return 0;
}
