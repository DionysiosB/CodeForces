#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> odds, evens;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){odds.push_back(p + 1);}
            else{evens.push_back(p + 1);}
        }

        if(odds.size() >= 3){
            puts("YES"); 
            printf("%ld %ld %ld\n", odds[0], odds[1], odds[2]);
        }
        else if(odds.size() > 0 && evens.size() >= 2){
            puts("YES"); 
            printf("%ld %ld %ld\n", odds[0], evens[0], evens[1]);
        }
        else{puts("NO");}
    }

}
