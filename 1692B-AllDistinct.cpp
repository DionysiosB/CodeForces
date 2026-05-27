#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cnt;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++cnt[x];
        }

        long odds(0), evens(0);
        for(std::map<long, long>::iterator it = cnt.begin(); it != cnt.end(); it++){
            long u = it->second;
            if(u % 2){++odds;}
            else{++evens;}
        }

        printf("%ld\n", odds + evens - (evens % 2));
    }

}
